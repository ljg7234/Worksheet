#include <stdio.h>
#define PRN_3(x,y,z) printf(#x" : %.1f "#y" : %.1f "#z" : %.1f ",x,y,z)
int  main(){
    float a = 1.1;
    float b = 2.2;
    float c = 3.3;
    PRN_3(a,b,c);
}