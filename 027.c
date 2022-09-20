#include <stdio.h>
int main(){
    int i,b,cou=0;
    int a[100];
    scanf("%d",&i);
    for (int c = 0; c < i; c++){
        int q;
        scanf("%d",&a[c]);
    }
    scanf("%d",&b);
    for (int x = 0; x <i; x++){
        if (b == a[x]){
            cou ++;
        }
    }
    printf("%d",cou);
}