#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if (i % 4 == 0){
        if (i % 100 != 0 || i % 400 == 0){
            printf("1");
        }else printf("0");
    }else printf("0");
}