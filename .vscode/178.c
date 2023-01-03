#include <stdio.h>
int main(){
    int x,dp[100001]={0,};
    scanf("%d",&x);
    dp[1] = 0;
    for(int a = 2; a <= x; a++){
        dp[a] = dp[a-1] + 1;
        if(a % 2 == 0){
            if(dp[a] > dp[a / 2] + 1){
                dp[a] = dp[a / 2] + 1;
            }
        }
        if(a % 3 == 0){
            if(dp[a] > dp[a / 3] + 1){
                dp[a] = dp[a / 3] + 1;
            }
        }
    }
    printf("%d",dp[x]);
    
    
}