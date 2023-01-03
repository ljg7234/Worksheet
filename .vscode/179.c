#include <stdio.h>
int main(){
    int num[1000];
    int k,n,count=0;
    scanf("%d %d",&n,&k);
    for(int i = 2; i <= n; i++){
        num[i] = i;
    }
    for(int i = 2; i <= n; i++){
        if(num[i] == 0){
            continue;
        }
        else{
            for(int j = i; j <= n; j += i){
                if(num[j] != 0){
                    num[j] = 0;
                    count++;
                }
                if (count == k){
                    printf("%d",j);
                    break;
                }

            }
        }
    }
}