#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *,const void *);
int main(){
    char *words[10];
    char qq[10];
    for (int i = 0; i < 10; i++){
        scanf("%s\n",qq);
        words[i] = (char*)calloc(10,sizeof(char));
        strcpy(words[i],qq);
    }

    qsort(words,10,sizeof(char*),compare);
    for (int j = 0; j < 10; j++){
        printf("%s\n",words[j]);
    }

     for (int k=0; k < 10; k++){
        free(words[k]);
        words[k]=NULL;
    }
}

int compare (const void *p,const void *q){
    return strcmp(*(char **)p,*(char **)q);
}
