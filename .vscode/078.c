#include <stdio.h>
int main(void)
{
    int a = 100, *p = &a, **q = &p, ***r = &q;

    printf("%u %u %u %u %u %u",&a, &a+1, p+1, q+1, r+1, *r+1);

    return 0;

}