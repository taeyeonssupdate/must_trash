#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k, l, number;
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
            printf("%*c", 2*(number-i)+1, ' ');
        }






        printf("\n");
    }
    for (k = 1; k <= number; k++){
        if (k <= number){
            printf("%*c", 2*(number-k)+1, '*');
        }
        for (l = 1; l < k; l++){
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
}