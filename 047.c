#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if (i == j == k){
        printf("%d",10000+i * 1000);
    }
    else if (i ==j ){
        printf("%d",1000+i * 100);
    }
    else if (j == k){
        printf("%d",1000+ j *100);
    }
    else if (i == k){
        printf("%d",1000+ i *100);
    }
    else {
        if (i > j && i > k){
            printf("%d",100 * i);
        }
        else if (j > k){
            printf("%d",100 * j);
        }
        else {
            printf("%d",100 * k);
        }
    }
}