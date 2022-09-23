import asyncio
from io import BytesIO
from PIL import Image
from discord.ext import commands
from discord import (
    ApplicationContext,
    File,
    Interaction,
    Embed,
    ui,
    ButtonStyle,
    EmbedField,
    Color,
    Message
)
from discord.commands import slash_command, Option
from playwright.async_api import async_playwright
from discord.ui import InputText, Modal


class MyModal(Modal):
    def __init__(self, *args, **kwargs) -> None:
        super().__init__(
            InputText(
                label="帳號",
                placeholder="account",
            ),
            InputText(
                label="密碼",
                value="password",
            ),
            *args,
            **kwargs,
        )

    async def callback(self, interaction: Interaction):
        embed = Embed(
            title="您的資訊",
            fields=[
                EmbedField(name="帳號", value=self.children[0].value, inline=False),
                EmbedField(name="密碼", value="密碼(已隱藏)", inline=False),
            ],
            color=Color.random(),
        )
        await interaction.response.send_message(embeds=[embed])


class must(commands.Cog):

    def __init__(self, bot):
        self.bot = bot

    @slash_command(name="mustlogin", description="登入學生資訊系統")
    async def must_login(self, ctx: ApplicationContext):

        class MyView(ui.View):
            @ui.button(label="登入驗證", style=ButtonStyle.primary)
            async def button_callback(self, button: ui.Button, interaction: Interaction):
                self.modal = MyModal(title="輸入登入資訊")
                await interaction.response.send_modal(self.modal)

        view = MyView()

        async with async_playwright() as pw:
            self.browser = await pw.chromium.launch(headless=False, channel="chrome")
            self.context = await self.browser.new_context(locale="zh-tw", viewport={"width": 520, "height": 600})
            self.page = await self.context.new_page()
            await self.page.goto("https://sss.must.edu.tw/")
            img = Image.open(BytesIO(await self.page.screenshot()))
            img = img.crop((28, 414, 152, 438))
            with BytesIO() as img_binary:
                img.save(img_binary, 'PNG')
                img_binary.seek(0)
                await ctx.interaction.channel.send(
                    content="登入",
                    file=File(fp=img_binary, filename='validcode.png'),
                    view=view)

            def check(m: Message):
                return m.author == ctx.author and m.channel == ctx.channel

            try:
                verify: Message = await self.bot.wait_for("message", check=check, timeout=35.0)
            except TimeoutError:
                return await ctx.send_followup("超過驗證時間")

            await self.page.locator("[placeholder=\"學號\\(Studend ID\\)\"]").click()
            await self.page.locator("[placeholder=\"學號\\(Studend ID\\)\"]").fill(view.modal.children[0].value)
            await self.page.locator("[placeholder=\"密碼\\(Password\\)\"]").click()
            await self.page.locator("[placeholder=\"密碼\\(Password\\)\"]").fill(view.modal.children[1].value)
            await self.page.locator("[placeholder=\"輸入驗證碼\\(Captcha\\)\"]").click()
            await self.page.locator("[placeholder=\"輸入驗證碼\\(Captcha\\)\"]").fill(verify.content)
            await self.page.click("button:has-text(\"登入 Log in\")")
            await asyncio.sleep(10)
            await self.context.close()
            await self.browser.close()


def setup(bot):
    bot.add_cog(must(bot))
