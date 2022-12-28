#include <stdio.h>
#include <stdlib.h>
int main(){
    int * numptr;
    numptr = (int*) calloc (1,sizeof(int));
    * numptr = 10;
    printf("%d",*numptr);
    free (numptr);  
}