#include <stdio.h>
int main(){
    int i,max =0;
    scanf("%d",&i);
    int arr[i]; 
    float sum;   
    for (int a = 0; a < i; a++){
        scanf("%d",&arr[a]);
        if (max < arr[a]){
            max = arr[a];
        }
    }
    for (int a = 0; a < i; a++){
        sum += (float)arr[a]*100/max;
    }
    
    printf("%f",sum/i);
}