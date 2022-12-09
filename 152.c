#include <stdio.h>
#include <stdarg.h>
double va_sum(int,...);

int main(){
    printf("sum = %3.1f\n",va_sum(3,2.8,9,0.1,8));
    return 0;
}

double va_sum(int num,...){
    double sum = 0.0;
    va_list ap;
    va_start(ap,num);

    for(int i = 0; i < num; i++){
        if(i % 2)
            sum += va_arg(ap,int);
        else 
            sum += va_arg(ap,double);
    }
    va_end(ap);
    return sum;
}
