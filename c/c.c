#include <stdio.h>
#include <stdlib.h>
int Addition(int,int), minus(int,int), multiply(int,int), divided(int,int);
int main(void){
    int a , b;
    char c;
    printf("Please input number: ");
    scanf("%d", &a);
    fflush(stdin);
    printf("Please input math: ");
    scanf("%c", &c);
    fflush(stdin);
    printf("Please input number: ");
    scanf("%d", &b);
    fflush(stdin);
    switch (c){
    case '+':
        printf("%d+%d=%d\n", a, b, Addition(a, b));
        break;
    case '-':
        printf("%d-%d=%d\n", a, b, minus(a,b));
        break;
    case '*':
        printf("%d*%d=%d\n", a, b, multiply(a, b));
        break;
    case '/':
        printf("%d/%d=%d\n", a, b, divided(a, b));
        break;
    case '%':
        printf("%d%%xit%d=%d\n", a, b, divided2(a, b));
        break;
    };
    return 0;
}
int Addition(int num1, int num2){
    int a;
    a=num1+num2;
    return a;
}
int minus(int num1, int num2){
    int a;
    a=num1-num2;
    return a;
}
int multiply(int num1, int num2){
    int a;
    a=num1*num2;
    return a;
}
int divided(int num1, int num2){
    int a;
    a=num1/num2;
    return a;
}
int divided2(int num1, int num2){
    int a;
    a=num1&num2;
    return a;
}