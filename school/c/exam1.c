#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=1, b=2;
    printf("&a=%p\ta=%d\t&b=%p\tb=%d\n", &a, a, &b, b);
    int *p, **pp;
    printf("&a=%p\ta=%d\t&b=%p\tb=%d\t&p=%p\t&pp=%p\n", &a, a, &b, b, &p, &pp);
    p = &a;
    printf("&a=%p\ta=%d\t&b=%p\tb=%d\t&p=%p\tp=%p\t*p=%d\n", &a, a, &b, b, &p, p, *p);
    *pp = &b;
    printf("&a=%p\ta=%d\t&b=%p\tb=%d\t&p=%p\tp=%p\t*p=%d\t&pp=%p\tpp=%p\t*p=%p\t**p=%d\n", &a, a, &b, b, &p, p, *p, &pp, pp, *pp, **pp);
    a = 3; b = 4;
    printf("&a=%p\ta=%d\t&b=%p\tb=%d\t&p=%p\tp=%p\t*p=%d\t&pp=%p\tpp=%p\t*p=%p\t**p=%d\n", &a, a, &b, b, &p, p, *p, &pp, pp, *pp, **pp);
    return 0;
}
