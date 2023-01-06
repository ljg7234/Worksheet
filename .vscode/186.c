#include <stdio.h>
int sosu(int num){
    int i;
    for(i = 2; i < num; i++){
        if(num % i == 0) break;
    }
    if(num == i) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    for(int i = m; i <= n; i++){
        if(i == 1){
            continue;
        }
        else{
            if(sosu(i)){
                printf("%d\n", i);
            }
        }
    }
    
    return 0;
}