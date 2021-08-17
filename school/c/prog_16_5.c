// prog16_5, 函數多載的範例--引數個數相同，但型態不同

#include <stdio.h>
#include <stdlib.h>

void show_int(int);    // show(int)的原型
void show_double(double); // show(double)的原型
int main(void)
{
    int a = 26;
    double b = 3.14;
    show_int(a); // 傳入整數到show()函數裡
    show_double(b); // 傳入倍精度浮點數到show()函數裡

    system("pause");
    return 0;
}
void show_int(int num) // show()函數，可接收一個整數
{
    printf("%d是一個整數\n",num);
}
void show_double(double num) // show()函數，可接收一個倍精度浮點數
{
    printf("%f是一個倍精度浮點數\n", num);
}
