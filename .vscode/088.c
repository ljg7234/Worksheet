#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *words[10];
    char qq[10];
    for (int i = 0; i < 10; i++){
        scanf("%s\n",qq);
        words[i] = (char*)calloc(10,sizeof(char));
        strcpy(words[i],qq);

    }
    for (int k=0; k < 10; k++){
        printf("%s\n",words[k]);
        free(words[k]);


    }

}