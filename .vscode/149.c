#include <stdio.h>
int main(){
    char input[] = "Software C Programming 2016";
    char out[100];

    sscanf(input,"%s",out);
    printf("1) %s\n",out);
    sscanf(input,"%[t]",out);
    printf("2) %s",out);
    return 0;
}