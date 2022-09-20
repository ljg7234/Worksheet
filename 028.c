#include <stdio.h>
int main(){
    int check[30] = {0,};
    for (int i = 0; i <28; i++){
        int n;
        scanf("%d",&n);
        check[n-1] = 1;        
    }
    for (int j = 0; j <30; j++){
        if (check[j] == 0){
            printf("%d",check[j]+1);
        }
    }
}