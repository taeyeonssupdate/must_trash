#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[10], *ptr, i;
    ptr = array;
    for (i = 0; i < 10; i++)
    {
        ptr[i] = i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    system("pause");
    return 0;
}
