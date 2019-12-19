#include <stdio.h>
#include <stdlib.h>

int main(){
    int integer, i, j, remainder;
    float result;

    printf("%s", "Please input an integer: ");
    scanf("%d", &integer);

    result = (float)integer;
    remainder = integer % 4;
    for (i = integer - 1; i >= 1; i--)
        if (i % 4 == (remainder + 1) % 4)
            result += i;
        else if (i % 4 == remainder)
            result /= i;
        else if (i % 4 == (remainder + 3) % 4)
            result -= i;
        else
            result *= i;
    printf("%s%.2f\n", "The number is: ", result);
    return 0;
}