#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, x, y;
    for (i=0;i<10;i++){
        for (j=10;j>0;j--){
            if (j>i){
                printf("*");
            }
        }
        printf("\n");
    }
    printf("=======================================================\n");
    for (i = 0; i < 10; i++){
        for (j = 10; j > 0; j--){
            if (j > i){
                printf(" ");
            }
        }
        for (x = -1; x < 10; x++){
            if (x < i){
                printf("*");
            }
        }
        for (y=0;y<=10;y++){
            if (y<i){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}