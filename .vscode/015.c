#include <stdio.h>
int main(){
    int i,j;
    scanf("%d\n",&i);
    scanf("%d",&j);
    if (i>=0 && j>=0){
        printf("1");}
    else if (i>=0 && j<0){
        printf("4");}
    else if (i<0 && j<0){
        printf("3");}
    else printf("2");
}