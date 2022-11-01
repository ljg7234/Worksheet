#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10]={0},ran;
    for (int i = 0; i < 10; i++){
        ran = rand() % 10;
        a[ran]++;
        if (a[ran] != 0 && a[ran] != 1){
            i--;
            continue;
        }
        printf("%d",ran);

    }
}