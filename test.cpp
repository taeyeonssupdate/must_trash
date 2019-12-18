#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int integer, i, j, remainder;
    char alph, reserve = 'M';
    float result, product;

    printf("%s", "Please input an integer: ");
    scanf("%d", &integer);

    result = (float)integer;
    remainder = integer % 4;
    // for  question 1
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

    // for question 2
    do
    {
        printf("%s", "Please input a character: ");
        scanf("%c", &alph);
        i = (('a' <= alph) && ('z' >= alph)) + (('A' <= alph) && ('Z' >= alph)) * 2;
        switch (i)
        {
        case 1:
            printf("%s\n", "It's a lower-case");
            break;
        case 2:
            printf("%s\n", "It's a block capitals");
        }
    } while (i == 0);

    // for question 3
    result = 1.0;
    for (i = 1; i <= integer; i++)
    {
        product = 1.0;
        for (j = 1; j <= i; j++)
            product *= j;
        result += 1.0 / product;
    }
    printf("The computation result is %.4f\n", result);

    // for question 4
    for (i = 1; i <= 3; i++)
    {
        printf("%s", "Please input a character: ");
        scanf("%c", &alph);

        switch (alph)
        {
        case 'm':
        case 'M':
            printf("%c\n", 'M');
            reserve = 'M';
            break;
        case 'c':
        case 'C':
            printf("%c\n", 'C');
            reserve = 'C';
            break;
        case 'e':
        case 'E':
            printf("%c\n", 'E');
            reserve = 'E';
            break;
        default:
            if ((('a' <= alph) && ('z' >= alph)) || (('A' <= alph) && ('Z' >= alph)))
                printf("%c\n", reserve);
            else
                i--;
        }
    }
    return 0;
}
