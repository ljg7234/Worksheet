#include <stdio.h>
int main(){
    int a= 0xF0F0F0F0;
    int mask = 1;
    for (int i = 1; i <= 4; ++i){
        putchar(((a & mask) == 0) ? '0' : '1');
        a >>=2;
    }
    return 0;
}