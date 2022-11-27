#include <stdio.h>
#include <stdarg.h>
#define END 0
#define INT 1
#define DOUBLE 2

double va_sum(int, ...);

int main(){
    printf("sum = %.3f\n",va_sum(INT,3,DOUBLE,3.0,END));
    printf("sum = %.3f\n",va_sum(DOUBLE,20.0,INT,90,DOUBLE,0.5,END));
    return 0;
}

double va_sum(int type,...){
    double sum = 0.0;
    va_list ap;
    va_start(ap,type);
    while(type!=0){
        if (type == INT)
            sum += va_arg(ap,int);
        else
            sum += va_arg(ap,double);
        type = va_arg(ap,int);
    
    }
    va_end(ap);
    return sum;
}