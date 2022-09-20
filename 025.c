#include <stdio.h>
int main(){
    int i, k, l ;
    scanf("%d",&i);
    for (int j = 0; j < i; j++){
        scanf("%d %d",&k,&l);
        printf("%d\n",k+l);
    }
}