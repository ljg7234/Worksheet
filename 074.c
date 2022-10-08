#include <stdio.h>

int main(void){

    int *p=(int*)0x100;
    double *q=(double*)0x100;
    char *r=(char*)0x100;
    printf("%p %p %p", p+3, q+3, r+3);
    return 0;

    }