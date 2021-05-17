#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char *dp = malloc(sizeof(char) * 26);
    int i, sum = 0;

    for (i = 0; i < 26; i++)
    {
        sum += 65 + i;
        *(dp + i) = (char)65 + i;
    }
    printf("%d", sum);

    return 0;
}