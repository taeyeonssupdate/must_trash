#include <stdio.h>

int main(void){
    int i=0;
    while (i<10){
        i++;
        int j=0;
        while (j<10){
            j++;
            if (j<=i){
                printf("*");
            }
        }    
        printf("\n");
    }
    printf("==============================\n");
    i=0;
        while (i<10)
        do {
            i++;
            int j=0;
            do {
                j++;
                if (j<=i){
                    printf("*");
                }
            } while (j<10);
            printf("\n");
        } while (i<10);
    return 0;
}