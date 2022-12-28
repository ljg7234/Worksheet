#include<stdio.h>
int main() {
    while (1){
        int i,j;
        scanf("%d %d",&i,&j);
        if (i == 0 && j == 0){
            break;
        }
        printf("%d\n", i+j);
    }
    return 0;
}