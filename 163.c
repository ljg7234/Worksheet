#include <stdio.h>
int main(){
    int x,a,sum=0;
    scanf("%d",&x);
    while(1){
        if(x % 5 == 0){
            sum = x / 5 + sum;
            break;
        }
        x = x -3;
        sum++;
        if(x <= 0){
            break;
        }
    }
    if (x < 0){
        printf("-1\n");
    }
    else printf("%d",sum);
}