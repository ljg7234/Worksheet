#include <stdio.h>
int main(){
    int n,m;
    int x;
    scanf("%d %d",&n,&m);
    for(int i = 1; i <= n && i <= m; i++){
        if(n % i == 0 && m % i == 0){
            x = i;
        }
    }
    printf("%d\n",x);
    printf("%d",n * m / x);
}