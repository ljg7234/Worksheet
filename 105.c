#include <stdio.h>
int main(){
    int a = 0xFF;
    int b = 1;
    a ^= a;
    a |= 0x37;
    a &= 0x15;
    printf("0x%x\n",a);
    b << 2;
    printf("0c%d",b);
    return 0;
}