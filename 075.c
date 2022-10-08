#include <stdio.h>

int main(void){

    char a[]="Hello";

    char *p;

    p = a;

 

    printf("%p\n", p);

    printf("%u\n", *a);

    printf("%u\n", *p);

    printf("%u\n", *(p+1));

    printf("%u\n", (*p)+1);

 

    return 0;

}