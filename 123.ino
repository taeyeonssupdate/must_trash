//右下角藍色板子5V接到上面板子Vcc GND接到上面GND
const int CS[2] = {5, 4};     //看好題目輸入p多少跟p多少 然後自訂CS對應的接起來 然後CS看你有幾組就填幾組 例如:(p22>5),(p23>4) CS[]裡面填2 = CS[2]
const int LED[3] = {9, 8, 7}; //看題目燈泡是L多少 然後自訂LED對應的接起來 然後CS看你有幾組就填幾組 例如(L3>9),(L4>10),(L5>11) LED[]裡面填3 = LED[3]
int P[2];                     //看CS幾組就填幾組
void setup()
{
    for (int i = 0; i <= 1; i++) //這裏i<=1 1改成cs幾組減1 假設CS有10組 就把i<=1的1改成10
    {
        pinMode(CS[i], INPUT);
    }
    for (int i = 0; i <= 2; i++) //這裏i<=2 2改成cs幾組減2 假設CS有5組 就把i<=2的2改成4
    {
        pinMode(LED[i], OUTPUT);
        digitalWrite(LED[i], HIGH);
    }
}
void loop()
{
    for (int i = 0; i <= 1; i++) //這裏i<=1 1改成cs幾組減1 假設CS有10組 就把i<=1的1改成10
        P[i] = digitalRead(CS[i]);

    /*
            P22  p23  | L3     L4    L5
            p[0] p[1] | LED[0] LED[1] LED[2]
        1.    0    0  |   0       1      1
        2.    0    1  |   1       0      1
        3.    1    0  |   0       0      0
        4.    1    1  |   1       1      0
            左邊是狀態用01 右邊是燈泡控制用0=LOW,1=HIGH
    */
    //1.
    if (P[1] == 0 && P[0] == 0) // 00
    {
        digitalWrite(LED[0], LOW);  //0
        digitalWrite(LED[1], HIGH); //1
        digitalWrite(LED[2], HIGH); //1
    }
    //2.
    else if (P[1] == 0 && P[0] == 1) // 01
    {
        digitalWrite(LED[0], HIGH); //1
        digitalWrite(LED[1], LOW);  //0
        digitalWrite(LED[2], HIGH); //1
    }
    //3.
    else if (P[1] == 1 && P[0] == 0) //10
    {
        digitalWrite(LED[0], LOW); //0
        digitalWrite(LED[1], LOW); //0
        digitalWrite(LED[2], LOW); //0
    }
    //4.
    else if (P[1] == 1 && P[0] == 1) //11
    {
        digitalWrite(LED[0], HIGH); //1
        digitalWrite(LED[1], HIGH); //1
        digitalWrite(LED[2], LOW);  //0
    }
}