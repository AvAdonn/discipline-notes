import os
import aiohttp

class CryptoPayClient():
    def __init__(self, api_token: str) -> None:
        self.host = 'https://testnet-pay.crypt.bot/api/'
        self._client = aiohttp.ClientSession(
            headers={
                'Crypto-Pay-Api-Token': api_token
            }
        )
        print('Session was opened!')
        
    async def get_me(self) -> dict:
        url = f'{self.host}getMe'
        async with self._client.get(url) as response:
            result = await response.json()
            print(result)
            return result          
        
    async def create_invoice(self, asset: str, amount: str | float) -> dict:
        url = f'{self.host}createInvoice'
        payload = {
            'asset': asset,
            'amount': str(amount)
        }
        
        async with self._client.post(url, json=payload) as response:
            result = await response.json()
            print(result)
            return result
            
    async def get_invoices(self, invoice_id) -> dict:
        url = f'{self.host}getInvoices'
        params = {
            'invoice_ids': invoice_id
        }
        async with self._client.get(url, params=params) as response:
            result = await response.json()
            print(result)
            return result
    
    async def close(self) -> None:
        await self._client.close()
        print('Session waas closed!')