#include <stdio.h>
int main(){
    int i,sum = 0;
    char a[100];
    scanf("%d\n",&i);
    scanf("%s",a);
    for (int q = 0; q < i; q++){
        sum = sum + a[q] - '0';

    }
    printf("%d",sum);
    printf("%d",i);
}