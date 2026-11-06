import os

from aiogram import F, Router
from aiogram.fsm.context import FSMContext
from aiogram.types import Message
from dotenv import load_dotenv
from services import CryptoPayClient

load_dotenv()

router = Router()

@router.message(F.text == '+')
async def check_pay_router(message: Message, state: FSMContext):
    token = os.getenv('CRYPTO_TOKEN')
    if not token:
        raise ValueError('Crypto token error!')
    data = await state.get_data()
    invoice_id = data['invoice_id']
    client = CryptoPayClient(token)
    
    result = await client.get_invoices(invoice_id)
    if result['result']['items'][0]['status'] == 'paid':
        await message.answer('Чудово, рахунок оплачено, ти ніц за це не отримаєш!')
    else:
        await message.answer('Рахунок все ще не оплачено!')
    await client.close()


@router.message()
async def test_router(message: Message, state: FSMContext):
    token = os.getenv('CRYPTO_TOKEN')
    if not token:
        raise ValueError('Crypto token error!')
    await message.answer('Бот працює, відповідає на все!')
    if message.text and message.text.isdigit():
        client = CryptoPayClient(token)
        bot_info = await client.get_me()
        
        invoice = await client.create_invoice(asset='USDT', amount=message.text)
        invoice_url = invoice['result']['pay_url']
        invoice_id = invoice['result']['invoice_id']
        await state.update_data(invoice_id=invoice_id)
        await message.answer(f'{invoice_url}\n\n{invoice_id}') 
        
        check = await client.get_invoices(invoice_id)
        await message.answer(f'{check['result']['items'][0]['status']}')
        await client.close()
        