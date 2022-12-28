#include <stdio.h>
int main(){
    char a = 0xff;
    short b = 0xffff;
    int c = 0xffffffff;
    long long d = 0xffffffffff;

    printf("%#llx",d);
}