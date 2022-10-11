#include <stdio.h>
#include <stdlib.h>

int compare(void *first,void *second){
    if ((*(int *) first) > (*(int *) second)){
        return 1;
    }
    else if (*(int*) first < *(int*)second){
        return -1;
    }
    else return 0;
}

int main(){
    int arr[7] = {2,5,3,6,7,8,9};
    int arr_size = sizeof(arr) / sizeof(int);
    
    qsort(arr,arr_size,sizeof(int),compare);
    for (int i = 0; i < 7; i++){
        printf("%d\n",arr[i]);
    }
}

