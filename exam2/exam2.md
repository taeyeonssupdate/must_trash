<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam2/%E9%A1%8C%E7%9B%AE%E8%AA%AA%E6%98%8E.png?raw=true" width="600">
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam2/%E6%8E%A5%E7%B7%9A%E5%9C%96.png?raw=true" width="600">


* 右下arduino的13(buzzer)接到上面的p26(聲音控製腳位)
---
* 可變電阻旋鈕朝自己 左 中 右 Vcc(5V) A0(讀取電壓) GND(接地)
* 右下arduinoA0接到可變電阻的中間
---
* 右下arduino的5V接一條線到麵包板
* 右下arduino的GND(建議靠左下角的GND)接一條線到麵包板
* 麵包板5V拉一條接到上面板子的5V再往下拉一條線接到可變電阻的左邊(Vcc(5V))
* 麵包板GND拉一條接到上面板子的GND再往下拉一條線接到可變電阻的右邊(GND))
---
* 燈泡 長的是正極Vcc+短的是GND 電阻隨便一個 沒有正負區分
* 右下arduino的3接到電阻 電阻接到燈泡Vcc 燈泡GDN接到麵包板GDN
---


程式碼：
```c
const int beeeeeeeeee = 13;
const int LED = 3;
const int POT = A0;
int val = 0;
float voltage = 0;

int v = 532;

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
    if (voltage < 2.5)
    {
        analogWrite(LED, 255 - val / 4);
    }
    else
    {
        digitalWrite(LED, 0);
        tone(beeeeeeeeee, v, 100);
    }
    delay(100);
}
```