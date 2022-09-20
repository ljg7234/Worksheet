#include <stdio.h>
int main(){
    int N, M;
    int a[100][100];
    int b[100][100];
    int i,j;
    scanf("%d %d",&N,&M);
    for (i = 0; i<N; i++){
        for (j = 0; j < M; j++){
            scanf("%d",&a[i][j]); 
        }
    }

    for (i = 0; i < N; i++){
        for (j = 0; j<M; j++){
            scanf("%d",&b[i][j]);
            a[i][j] = b[i][j] +a[i][j]; 
        }
    }
    
    for (i = 0; i < N; i++){
        for (j = 0; j< M; j++){
            printf("%d ",a[i][j]); 
        }
        printf("\n");
    }
}