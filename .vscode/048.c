#include <stdio.h>
int main(){
    int i,j;
    scanf("%d\n",&i);
    scanf("%d",&j);
    printf("%d\n",i * (j % 10));
    printf("%d\n",i * (j % 100 / 10));
    printf("%d\n",i * (j / 10));
    printf("%d",i * j);
}
