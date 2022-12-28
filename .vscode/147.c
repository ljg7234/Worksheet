#include <stdio.h>
#include <stdarg.h>
int add(int type,...);
int main(){
    int x;
    x = add(3,2,4,3);
    printf("%d",x);
}

int add(int type,...){
    int sum = 0;
    va_list ap;
    va_start(ap,type);
    for(int i = 0; i < type; i++){
        sum += va_arg(ap,int);
    }
    va_end(ap);
    return sum;
}