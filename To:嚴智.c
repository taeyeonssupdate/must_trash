#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char x[1]='',y[1] ='';
    int i=0;
    while (1){
        scanf("%s",&x);
        switch (x){
        case 'M':
        case 'm':
            printf("M=======\n");
            y = x;
            break;
        case 'C':
        case 'c':
            printf("C=======\n");
            y = x;
            break;
        case 'E':
        case 'e':
            printf("E=======\n");
            y = x;
            break;
        default:
            printf("%sfuckfuck",x);
            break;
        }
    }
    
}