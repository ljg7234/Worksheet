#include <stdio.h>
#include <stdarg.h>
int func(int,...);
int main(){
    printf("%d",func(3,4,5,6));
    return 0;
}

int func(int type,...){
    int i =0,j = 0;
    va_list ap;
    va_start(ap,type);
    type *= 3;
    while (type > j){
        i = va_arg(ap,int);
        j += i;
    }
    va_end(ap);
    return j;
    
}