#include <stdio.h>
int main(){
    int arr[10];
    int num=0;
    for (int i = 0; i <9; i++){
        scanf("%d\n",&arr[i]);
        arr[i] = arr[i] % 42;

    }

    for (int i = 9; i <10; i++){
        scanf("%d",&arr[i]);
        arr[i] = arr[i] % 42;

    }

    for (int i =0; i < 10; i++){
        int count = 0;
        for (int j=i+1; j < 10; j++){
            if (arr[i] == arr[j])
            count ++;
        }
        if (count == 0){
            num ++;
        }
    }
    
    
    printf("%d",num);
}