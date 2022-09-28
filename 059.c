#include <stdio.h>
int main(){
    int arr[9];
    for (int i = 0; i < 9; i++){
        scanf("%d",&arr[i]);
    }
    int sum,q;
    sum = arr[0];
    for (int i = 0; i < 9; i++){
        if(arr[i]> sum){
            sum = arr[i];
        }
    }
    for (int i = 0; i < 9; i++){
        if (sum == arr[i]){
            q = i;
        }
    }
    printf("%d\n",sum);
    printf("%d",q);
}