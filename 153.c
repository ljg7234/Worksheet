#include <stdio.h>
#define MACRO_CAL(X,Y) (X) * (Y)
int  main(){
    printf("M : %d\n",6 / MACRO_CAL(3 - 1, 1 + 2) * 2);
    return 0;
}