#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    for (int a = 0; a < i; a++){
        for (int j = 0; j < i - a -1; j++){
            printf(" ");
        }
        
        for (int j = 0; j <= a; j++)
            printf("*",i);
        printf("\n");

    }
}
