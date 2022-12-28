#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    g = (a*a + b*b + c*c + d*d + e*e)%10;
    printf("%d",g);
}