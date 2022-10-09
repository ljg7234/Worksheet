#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    int a[3];
    int sum = 0;
    for (int i = 0; i < 3; i++){
        a[i] = atoi(argv[i]);
        sum +=a[i];
    }
    printf("%d",sum / argc);

}