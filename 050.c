#include <stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d %d\n",&a,&b);
    scanf("%d",&c);
    d = (b +c)/60;
    e = (b + c)%60;
    if (a + d >= 24){
        printf("%d %d",a+d-24,e);
    }
    else {
        printf("%d %d",a+d,e);
    }
    
    
}