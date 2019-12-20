#include <stdio.h>

int main(){
    char x[100];
    while (scanf("%s",x)!=EOF){
        printf("hello, %s\n",x);
    }
    return 0;
}