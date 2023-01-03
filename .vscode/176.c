#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x,y,z;
    x = n / 5;
    y = n / 25;
    z = n / 125;
    printf("%d",x + y + z);
}