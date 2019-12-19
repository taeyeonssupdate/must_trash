#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 0;
    float i, answer = 0;
    printf("Please input n: ");
    scanf("%f", &i);
    answer = i;
    while (i > 0)
    {
        while (i != 0 && j < 4)
        {
            j++;
            if (j == 1)
            {
                answer -= i - 1;
            }
            else if (j == 2)
            {
                answer *= i - 1;
            }
            else if (j == 3)
            {
                answer += i - 1;
            }
            else if (j == 4)
            {
                answer /= i - 1;
            }
            i--;
        }
        j = 0;
    }
    printf("The answer is %f \n", answer);
    return 0;
}