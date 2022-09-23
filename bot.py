import configparser
from discord import Intents
from discord.ext import commands

conf = configparser.ConfigParser()
conf.read('config.ini')

bot = commands.Bot(
    command_prefix=commands.when_mentioned_or(conf.get('setting', 'Prefix')),
    intents=Intents.all()
)

bot.load_extension('must')

if __name__ == "__main__":
    bot.run(conf.get('setting', 'TOKEN'))
