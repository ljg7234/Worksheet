#include <stdio.h>
int main(){
    int m,n,sum=0,num=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(; m <= n; m++){
        for(int i = 2; i <= m; i++){
            
            if (m == i) {
                sum +=m;
                if(num == 0){
                    num = m;
                }
            }
            if (m % i == 0) {
                break;
            }
        }
    }
    if(sum == 0){
        printf("-1");
    }
    else {
        printf("%d\n",sum);
        printf("%d",num);   
    }
    
}