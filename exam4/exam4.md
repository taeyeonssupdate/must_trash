<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam3/%E9%A1%8C%E7%9B%AE%E8%AA%AA%E6%98%8E.png?raw=true" width="650">
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam3/%E9%A1%8C%E7%9B%AE%E8%AA%AA%E6%98%8E.png?raw=true" width="650">

---

左邊有很多開關 分4個 做邊數來第二個開左邊的1234 網上撥ON<br>
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam3/switch.png?raw=true" width="400">

---

編譯時請選 開發版: Arduino/Genuino Uno 序列埠: COM3 (com+數字) 避免郭哲安不會<br>
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam3/uno.png?raw=true" width="400">
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam3/com.png?raw=true" width="400">

---

<img align="right" src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam3/%E4%B8%83%E6%AE%B5%E9%A1%AF%E7%A4%BA%E5%99%A8.png?raw=true" width="300">

題目前四個應該是數字 後四個是英文家圖形<br>
在程式碼const int SEG_code[8]裡面<br>
假設題目是2468 ABCD 就把後面的數字改掉<br>
改成HEX_2 HEX_4 HEX_6 HEX_8<br>
如果是圖形或英文那格就要填二或十六進制<br>
<br>
看老師出的圖形 亮起來的是0沒有亮的是1<br>
例如L:<br>
DP=1 (固定1不動)<br>
G=1<br>
F=0<br>
E=0<br>
D=0<br>
C=1<br>
B=1<br>
A=1<br>
<br>
二進制：<br>
換成程式碼由下往上 GFEDCBA=11000111<br>
最後前面要加上0b 變成0b11000111<br>
十六進制：<br>
換成程式碼由下往上 GFEDCBA=11000111<br>
拆成前四個後四個 然後用8421換算成0123456789ABCDEF<br>
1100 = c, 0111=7 => c7<br>
最後前面要加上0x 變成0xc7<br>
改在SEG_code那邊<br>
<br>
<img align="right" src="https://github.com/taeyeonssupdate/zerojudge/blob/master/exam3/discord.png?raw=true" width="350">
```
!七段 DEF
```
如果你今天腦袋剛好忘了帶<br>
用手機打開discord在微算機那邊打<br>
!七段 (會亮的燈A~G)<br>
(這裡用英文鍵盤打驚嘆號 要不然跑不出來 然七段後面有空格)<br>

---

點亮一個數字1ms有4個4ms<br>
4個數字要持續3秒=3/4=0.75s=750ms<br>

---
程式碼：
```cpp
#define HEX_0 0xc0
#define HEX_1 0xf9
#define HEX_2 0xa4
#define HEX_3 0xb0
#define HEX_4 0x99
#define HEX_5 0x92
#define HEX_6 0x82
#define HEX_7 0xf8
#define HEX_8 0x80
#define HEX_9 0x90
const int SEG[8] = {6, 7, 8, 9, 10, 11, 12, 13}; //七段腳位(不要動)
const int com[4] = {2, 3, 4, 5};                 //四個顯示器腳位(不要動)
const int SEG_code[8] = {
    // 不是數字或字母的請看上圖說明
    // 前4個數字放這
    HEX_3, //第1個放這=3=HEX_3
    HEX_5, //第2個放這=5=HEX_5
    HEX_7, //第3個放這=7=HEX_7
    HEX_9, //第4個放這=9=HEX_9
    // 後4個字放這
    0xa0, //第1個放這=0xa0 (這不在資料庫 要自己打)
    0xa7, //第2個放這=0xa7 (這不在資料庫 要自己打)
    0x89, //第3個放這=0x89 (這不在資料庫 要自己打)
    0x8c, //第4個放這=0x8c (這不在資料庫 要自己打)
};
byte disp, x;
void setup()
{
    for (int i = 0; i < 8; i++){
        pinMode(SEG[i], OUTPUT);
    }
    for (int i = 0; i < 4; i++){
        pinMode(com[i], OUTPUT);
    }
}
void loop(){
    if (x == 0) x = 4;
    else  x = 0;
    for (int i = 0; i < 750; i++){ //750ms 考試會改
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                digitalWrite(com[k], 1); // 防殘影
            }
            // 寫入數字
            disp = SEG_code[x + j];
            for (int k = 0; k < 8; k++){
                if (bitRead(disp, k)){
                    digitalWrite(SEG[k], 1); //不亮
                }
                else{
                    digitalWrite(SEG[k], 0); //亮
                }
            }
            digitalWrite(com[3 - j], 0); //顯示數字
            delay(1);  //延遲1ms
        }
    }
}
```
