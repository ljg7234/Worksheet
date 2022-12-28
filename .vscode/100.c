#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *name[10];
    char input[50];
    int i;
    for (i = 0; i < 10; i++){
        scanf("%s",input);
        name[i] = calloc(strlen(input)+1,sizeof(char));
        strcpy(name[i],input);
    }
    for (i = 0; i < 10; i++){
        printf("%s\n",name[i]);
        free(name[i]);
        name[i] = NULL;
    }
    
}