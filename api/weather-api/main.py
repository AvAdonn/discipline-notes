import requests
import aiohttp
import asyncio

URL = 'https://httpbin.org'
NEW_URL = 'https://api.open-meteo.com/v1/'

def first_main():
    params = {
        'city': 'Chernivtsy',
        'units': 'metric',
        'days': 3
    }
    
    headers = {
        'User-Agent': 'WeatherApp/1.0',
        'Acept-Language': 'uk-UA'
    }
    
    response = requests.get(
        URL + '/get',
        params=params,
        headers=headers
    )
    print(f'Кінцеве посилання: {response.url}\n')
    print(f'Вiдповідь: {response}\n')
    print(f'Статус-код: {response.status_code}\n')
    print(f'Текст відповіді: {response.text}\n')
    
    data = response.json()
    print(f'Тип: {type(data)}\n')
    print(f'''
Аргументи: {data['args']}

Наш ЮА: {data['headers']['User-Agent']}

Айпі: {data['origin']}    
    
    
    ''')
    
def second_main():
    params={
        'latitude': 48.29,
        'longitude': 25.93,
        'current_weather': 'true'
    }
    headers={
        'XD': 'xd'
    }
    
    response = requests.get(
        NEW_URL + '/forecast',
        params=params,
        headers=headers,
        timeout=5
    )
    
    response.raise_for_status()
    data = response.json()
    
    print(f'''
Response: {data}
          
Temperature: {data['current_weather']['temperature']} GofCe
        
Status-code: {response.status_code}
''')    
    

async def main():
    params = {
        'latitude': 48.29,
        'longitude': 25.93,
        'current_weather': 'true'
    }

    async with aiohttp.ClientSession() as session:
        async with session.get(NEW_URL + '/forecast', params=params) as response:
            response.raise_for_status()
            
            data = await response.json()
            
            print(f'''
Temperature: {data['current_weather']['temperature']}

Status-Code: {response.status}                 
''')
        
    
if __name__ == '__main__':
    asyncio.run(main())