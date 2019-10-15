#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++){
        if (i <= number){
            printf("%*c", 2*(number-i)+1, '*');
        }
        for (j = 1; j < i; j++){
            // printf("%c", '*');
        }
        puts("");
    }
    // for (i = 1; i <= number; i++){
    //     if (i <= number){
    //         printf("%*c", 2*(number-i)+1, '*');
    //     }
    //     for (j = 1; j < i; j++){
    //         // printf("%c", '*');
    //     }
    //     puts("");
    // }
    return 0;
}


