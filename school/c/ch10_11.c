#include <stdio.h>
#include <stdlib.h>
void rect(int, int *, int *);
int main(void)
{
    int a = 5;
    int area, peri;
    rect(a, &area, &peri);
    printf("area=%d,total length=%d\n", area, peri);

    return 0;
}

void rect(int x, int *p1, int *p2)
{
    *p1 = x * x;
    *p2 = 2 * (x + x);
}
