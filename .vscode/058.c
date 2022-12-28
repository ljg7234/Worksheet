#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int Max = arr[0];
    int Min = arr[0]; 
    for (int i = 0; i < n; i++){
        if(arr[i]> Max){
            Max = arr[i];
        }
        if(arr[i]<Min){
            Min = arr[i];
        }

    }
    printf("%d %d",Min,Max);
}