#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct ba{
    char name[51];
}ba;
int main(){
    int i;
    scanf("%d",&i);
    ba* c;
    c = (ba*)malloc(sizeof(ba)*i);


}