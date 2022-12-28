#include <stdio.h>
int main(){
    int a,sum=0;
    scanf("%d",&a);
    for(int  i = 0; i < a; i++){
        int num;
        scanf("%d",&num);
        for(int j = 2; j <= num; j++){
            if (num == j) {
                sum++;
            }
            if (num % j == 0) {
                break;
            }
        }
    }
    printf("%d",sum);
}