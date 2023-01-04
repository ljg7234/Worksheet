#include <stdio.h>
int main(){
    int n;
    long long result=0;;
    scanf("%d",&n);
    for(int i = 1; i <= n; i *=10){
        result += n - i + 1;
    }
    printf("%lld",result);
}
