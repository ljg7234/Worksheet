#include <stdio.h>

void f(int a[3]);
int main(void)

{
    char s[] = "I like C.";
    char *p = "I like C.";
    int a[3];
    double d[5];
    printf("%d %d %d %d\n", sizeof(s), sizeof(p), sizeof(a), sizeof(d));
    f(a);
    return 0;

}

void f(int a[3])

{

printf("f():sizeof(a) = %ld\n", sizeof(a));

}