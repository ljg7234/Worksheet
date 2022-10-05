#include <stdio.h>

int main(void) {

    unsigned int a = 10, *p;
    p = &a;
    printf("%p\n", p);
    printf("%u\n", *p);
    printf("%u\n", *&a);
    printf("%p\n", *&p);
    printf("%u\n", **&p);
    return 0;

}