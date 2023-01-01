#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int len;
    char str[51];
}word;

int compare(const void* first, const void* second){
    word* a = (word*)first;
    word* b = (word*)second;
    if(a -> len < b -> len){
        return -1;
    }
    else if(a -> len > b -> len){
        return 1;
    }
    else if(a -> len == b -> len){
        if(strcmp(a->str,b ->str) < 0){
            return -1;
        }
        else return 1;
    }
}


int main(){
    
    int n;
    scanf("%d",&n);
    word* text;
    text = (word*)malloc(sizeof(word) * n);
    for(int i = 0; i < n; i++){
        scanf("%s",text[i].str);
        text[i].len = strlen(text[i].str);
        for(int j = 0; j < i; j++){
            if(strcmp(text[i].str,text[j].str) == 0){
                i = i - 1;
                n = n - 1;
                break;
            }
        }
    }

    qsort(text,n,sizeof(text[0]),compare);
    for(int i = 0; i < n; i++){
        printf("%s\n",text[i].str);
    }

    
}