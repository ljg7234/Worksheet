#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i = 2; i <= x; i++){
        int a = x % i;
        if(x == i) {
            printf("%d\n",i);
            break;
        } 
        if(a == 0){
            x = x / i;
            printf("%d\n",i);
            i = 1;
        }
              
    }

}