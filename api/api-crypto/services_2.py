import logging
import os

import aiohttp
from dotenv import load_dotenv
from decimal import Decimal

load_dotenv()
logger = logging.getLogger(__name__)

test_token = os.getenv('CRYPTO_BOT_TEST_TOKEN')
if not test_token:
    logger.warning('Test-Crypt-token Error!')
    raise ValueError('Test-Crypt-token Error')


class CryptoBotClient():
    def __init__(self, api_token) -> None:
        self._api_token = api_token
        self.host = 'https://testnet-pay.crypt.bot/api/'
        self._session: aiohttp.ClientSession | None = None
    
    async def start_session(self) -> None:
        self._session = aiohttp.ClientSession(
            headers={
                'Crypto-Pay-Api-Token': self._api_token   
            },
            timeout=aiohttp.ClientTimeout(total=10)
        )
        logger.info('Сесія відкрита-> CryptoBotTest')
    
    async def get_me(self) -> dict:
        url = f'{self.host}getMe'
        if self._session is None:
            logger.warning('Сесія не відкрита')
            raise ValueError('Не має активної сесії')
        
        async with self._session.get(url) as response:
            result = await response.json()
            logger.info('Зроблено GetMe-запит')
            return result
    
    async def create_invoice(self, asset: str, amount: str | Decimal, expire: int, order_id: str) -> dict:
        url = f'{self.host}createInvoice'
        payload = {
            'asset': asset,
            'amount': str(amount),
            'payload': order_id,
            'expires_in': expire
        }
        if self._session is None:
            logger.warning('Сесія не відкрита')
            raise ValueError('Не має активної сесії')
        
        async with self._session.post(url, json=payload) as response:
            result = await response.json()
            logger.info('Зроблено CreateInvoice-запит')
            return result
    
    async def get_invoices(self, invoice_id) -> dict:
        url =f'{self.host}getInvoices'
        params = {
            'invoices_ids': invoice_id
        }
        if self._session is None:
            logger.warning('Сесія не відкрита')
            raise ValueError('Не має активної сесії')
        
        async with self._session.post(url, json=params) as response:
            result = await response.json()
            logger.info('Зроблено GetInvoice-запит')
            return result

    async def close_session(self) -> None:
        if self._session:
            await self._session.close()
            logger.info('Сесія закрита-> CryptoBotTest')