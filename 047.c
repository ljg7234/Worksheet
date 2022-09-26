#include <stdio.h>
int main(){
    char i[50];
    char j[50];
    scanf("%s\n",i);
    scanf("%s",j);
    int a = (int) i[0] * (int) *j;
    printf("%d",a);
}