#include <stdio.h>

int main(void){
    double d=3.1;
    double *dp;
    dp=&d;
    printf("%ld\n", sizeof(*dp));
    printf("%ld\n", sizeof(dp));
    return 0;

}

 