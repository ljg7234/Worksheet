#include <stdio.h>
int main(){
    int n,m,sum = 0;
    scanf("%d\n",&n);
    scanf("%d",&m);
    for (int i = 0; i < m; i++){
        int c,d;
        scanf("%d %d",&c,&d);
        sum += c * d;
    
    }
    if (n == sum){
        printf("Yes");
    }
    else {
        printf("No");
    }
}