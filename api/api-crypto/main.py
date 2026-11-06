import asyncio
import os

from aiogram import Bot, Dispatcher
from dotenv import load_dotenv
from handlers import router


async def main() -> None:
    load_dotenv()
    token = os.getenv('BOT_TOKEN')
    if not token:
        raise ValueError('Token Error')
    
    bot = Bot(token)
    dp = Dispatcher()

    try:
        dp.include_router(router)
        await dp.start_polling(bot)
            
    except KeyboardInterrupt:
        print('Bot Stopped!')
    
    except Exception as e:
        print(f'Some error: {e}')
    
if __name__ == '__main__':
    asyncio.run(main())