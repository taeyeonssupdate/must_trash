const int SEG[8] = {6, 7, 8, 9, 10, 11, 12, 13};
const int com[4] = {2, 3, 4, 5};
const int SEG_code[8] = {0xb0, 0x92, 0xf8, 0x90,
                        0xa0, 0xa7, 0x89, 0x8c,};
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
    for (int i = 0; i < 750; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                digitalWrite(com[k], 1);
            }
            disp = SEG_code[x + j];
            for (int k = 0; k < 8; k++){
                if (bitRead(disp, k)){
                    digitalWrite(SEG[k], 1);
                }
                else{
                    digitalWrite(SEG[k], 0);
                }
            }
            digitalWrite(com[3 - j], 0);
            delay(1);
        }
    }
}