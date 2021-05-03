#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k, address[4];
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &address[i]);
        if (address[i] > 255 || address[i] < 0)
        {
            i--;
            continue;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            k = address[i] % 2;
            address[i] /= 2;
            printf("%d", k);
        }
        printf(i == 3 ? "\n" : ".");
    }
    return 0;
    system("pause");
}