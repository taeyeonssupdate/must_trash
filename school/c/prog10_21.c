#include <stdio.h>

void display(char *ptr, int n);

int main(void)
{
    char x[] = "123456789";
    char *ptr = x;
    display(ptr, 3);
    return 0;
}

void display(char *ptr, int n)
{
    puts(ptr + n - 1);
}
