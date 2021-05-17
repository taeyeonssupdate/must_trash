#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[10], *ptr;
    ptr = array;
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    system("pause");
    return 0;
}
