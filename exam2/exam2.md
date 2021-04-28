<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam2/%E9%A1%8C%E7%9B%AE%E8%AA%AA%E6%98%8E.png?raw=true" width="600">
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam2/%E6%8E%A5%E7%B7%9A%E5%9C%96.png?raw=true" width="600">
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam2/line1.png?raw=true" width="600">


- 右下 arduino 的 13(buzzer)接到上面的 p26(聲音控製腳位)

---

- 可變電阻旋鈕朝自己 左 中 右 Vcc(5V) A0(讀取電壓) GND(接地)
- 右下 arduinoA0 接到可變電阻的中間

---

- 右下 rduino 的 5V 接一條線到麵包板
- 右下 arduino 的 GND(建議靠左下角的 GND)接一條線到麵包板
- 麵包板 5V 拉一條接到上面板子的 5V 再往下拉一條線接到可變電阻的左邊(Vcc(5V))
- 麵包板 GND 拉一條接到上面板子的 GND 再往下拉一條線接到可變電阻的右邊(GND))

---

- 燈泡 長的是正極 Vcc+短的是 GND 電阻隨便一個 沒有正負區分
- 右下 arduino 的 3 接到燈泡Vcc 燈泡短接到電阻 GND 接到麵包板 GND
---


重新整理網頁 會更新

程式碼：

```c
const int beeeeeeeeee = 13; //考試可能會改腳位
const int LED = 3; //考試可能會改腳位
const int POT = A3; //考試可能會改腳位
int val = 0;
float voltage = 0;

int v = 784; //考試可能會改聲音
// sound[12] = {523,554,587,622,659,698,740,784,831,880,932,988}

void setup()
{
    pinMode(beeeeeeeeee, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    val = analogRead(POT);
    voltage = val * 5.0 / 1023.0;
    Serial.println(voltage);
    delay(200);
    if (voltage < 3.0) //考試可能會改
    {
        analogWrite(LED, voltage / 4); //考試可能會改
        tone(beeeeeeeeee, 784, 100);
    }
    else
    {
        digitalWrite(LED, 0);
        tone(beeeeeeeeee, 523, 100);
    }
    delay(100);
}
```

網路找的看得懂就接ㄅ 比較快 腳位自己改<br>
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam2/line2.png?raw=true" width="600">
