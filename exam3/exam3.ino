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