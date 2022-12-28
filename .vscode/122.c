#include <stdio.h>
int main(){
    int n,paper[100][100]= {0},sum = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        int j,k;
        scanf("%d %d",&j,&k);
        for (int v = j; v < j +10; v++){
            for (int h = k; h < k + 10; h++){
                if (paper[v][h] != 1){
                    paper[v][h] = 1;
                    sum ++;
                }
            }
        }

    }
    printf("%d",sum);
    return 0;

}