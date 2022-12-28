#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void myprint(char *format,...);

int main(){
    myprint("name = %s age = %d\n","tom",12);
    return 0;
}

void myprint(char *format,...){
    va_list ap;
    char *str;
    int a;
    va_start(ap,format);
    while(*format){
        if(strncmp(format,"%s",2)==0){
            str = va_arg(ap,char*);
            while(*str)
                putchar(*str++);
            format = format + 2;
        }
        else if(strncmp(format,"%d",2)==0){
            a = va_arg(ap,int);
            printf("%d",a);
            format = format + 2;
        }
        else{
            putchar(*format);
            format++;
        }
    }
    va_end(ap);
}