#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    for (int a = 0; a < i; a++){
        for (int j = 0; j <= a; j++)
            printf("*");
        printf("\n");

    }
}
