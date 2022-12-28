#include <stdio.h>
int main(){
    int a,b,v,num=0,cur=0;
    scanf("%d %d %d",&a,&b,&v);
    num = (v - b -1) / (a - b) + 1;
    printf("%d",num);
}