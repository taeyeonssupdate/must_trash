#include <stdio.h>
#include <stdlib.h>

int main(){
    int j = 0;
    float i, answer = 0;
    printf("Please input n: ");
    scanf("%f", &i);
    answer = i;
    while (i > 1){
        while (i != 1 && j < 4){
            j++;
            if (j == 1){
                answer -= i - 1;}
            else if (j == 2){
                answer *= i - 1;
            }
            else if (j == 3){
                answer += i - 1;
            }
            else if (j == 4){
                answer /= i - 1;
            }
            i--;
        }
        j = 0;
    }
    printf("%s%.2f\n", "The number is: ", answer);
    return 0;
}