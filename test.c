#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k, number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++){
        if (i <= number){
            printf("%*c", i, '*');
        }
        for (j = 1; j < i; j++){
            printf("%c", '*');
        }
        if (i <= number){
            printf("%*c", 2*(number-i)+3, ' ');
        }
        if (i <= number){
            printf("%*c", 2*(number-i)+2, '*');
        }
        for (j = 1; j < i; j++){
            printf("%c", '*');
        }
        printf("\n");
        if (i == number){
            for (i = 1; i <= number; i++){
                printf("%*c", number, '*');
                for (j = 1; j < number+number+4; j++){
                    printf("%c", '*');
                }
                printf("\n");
            }
        }
    }
    return 0;
}