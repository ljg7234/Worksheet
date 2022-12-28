#include <stdio.h>
int main(){
    int N,X;
    scanf("%d %d",&N,&X);
    for (int i = 0; i < N; i ++){
        int c;
        scanf("%d",&c);
        if (c < X){
            printf("%d\n",c);
        }
    }
}