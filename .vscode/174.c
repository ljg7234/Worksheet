#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void* first, const void* second){
    return *((int *)first) - *((int *)second);
}

int main(){
    int a,b,sum,num=0;
    scanf("%d %d",&a,&b);
    sum = a+b;
    int* list = malloc(sizeof(int) * sum);
    for(int i = 0; i < sum; i++){
        scanf("%d",&list[i]);
    }
    qsort(list,sum,sizeof(int),compare);
    for(int i = 1; i < sum; i++){
        
        if(list[i] == list[i-1]){
            num +=2;
        }
    }
    printf("%d\n",sum - num);
    
    return 0;
}