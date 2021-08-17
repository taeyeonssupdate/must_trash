const int row[2] = {4, 5};     // scan port
const int column[2] = {6, 7};  // keyin port
const int RGB[3] = {8, 9, 10}; // 宣告LED位置
void RGB_LED(int R, int G, int B);
unsigned char KN; //按鍵值
int i, j, k;
//===========================================
void setup()
{
    for (int i = 0; i <= 1; i++)
        {
            pinMode(row[i], OUTPUT);
            pinMode(column[i], INPUT);
        }
    for (int i = 0; i < 3; i++)
        pinMode(RGB[i], OUTPUT);
    Serial.begin(9600);
}
//===========================================
void loop()
{
    while (1)
    {
        for (i = 0; i <= 1; i++)
        {
            for (j = 0; j <= 1; j++)
                digitalWrite(row[j], 1); // 掃描信號全部為1
            digitalWrite(row[i], 0);     // 輸出掃描線
            for (k = 0; k <= 1; k++)
            {
                if (!digitalRead(column[k])) // 有按鍵
                {
                    while (!digitalRead(column[k]))
                        ;               // 等待按鍵放開
                    KN = 4 * i + k;     // 計算鍵值
                    Serial.println(KN); // 顯示鍵值
                    delay(20);          // 延遲20ms
                    break;              // 跳出
                }
                if (KN == 0)
                    RGB_LED(0, 255, 255);
                else if (KN == 1)
                    RGB_LED(0, 0, 255);
                else if (KN == 4)
                    RGB_LED(255, 0, 255);
                else
                    RGB_LED(255, 255, 0);
            }
        }
    }
}

void RGB_LED(int R, int G, int B)
{
    analogWrite(RGB[0], R); // 輸出紅色信號(PWM)
    analogWrite(RGB[1], G); // 輸出綠色信號(PWM)
    analogWrite(RGB[2], B); // 輸出藍色信號(PWM)
}