#include <stdio.h>
#include <stdarg.h>
int func(int type,...);
int main(){
    printf("%d",func(3,4,5,6));

}
int func(int type,...){
    int sum= 0;
    va_list ap;
    va_start(ap,type);
    while(sum += va_arg(ap,int) != 0);
    va_end(ap);
    return sum;
}