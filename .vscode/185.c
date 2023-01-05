#include <stdio.h>
#include <stdlib.h>
int main(){
    while(1){
        int n,m,mnm1=0,mnm2=0,count=0;
        scanf("%d %d",&n,&m);
        if(n == 0 && m == 0) break;
        int* mn1 = (int*)malloc(sizeof(int) * n);
        int* mn2 = (int*)malloc(sizeof(int) * m);
        for(int i = 0; i < n; i++){
            scanf("%d",&mn1[i]);
        }
        for(int i = 0; i < m; i++){
            scanf("%d",&mn2[i]);
        }
        while(mnm1 < n && mnm2 < m){
            if(mn1[mnm1] < mn2[mnm2]){
                mnm1++;
            }
            else if(mn1[mnm1] > mn2[mnm2]){
                mnm2++;
            }
            else {
                count++;
                mnm1++;
                mnm2++;
            }
        }
        printf("%d\n",count);
    }
}