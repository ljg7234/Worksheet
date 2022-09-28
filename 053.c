#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    for (int a = 0; a < i; a++){
        int b,c;
        scanf("%d %d",&b,&c);
        printf("Case #%d: %d\n",a+1,b+c);
    }
}