#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *a;
    char c[1000000];
    int b[26] = {0,};
    int d = 0,e =0,f=0;
    scanf("%s",c);
    a = (char*)calloc(strlen(c),sizeof(char));
    strcpy(a,c);
    for (int i = 0; i < strlen(a); i++){
        for (int j = 0; j < 26; j++){
            if (a[i] == 'a' + j || a[i] == 'A' + j){
                b[j]++;
            }
        }
    }
    
    for (int j = 0; j < 26; j++){
        if (d < b[j]){
            d = b[j];
            e = j;
        }   
    }
    for (int j = 0; j < 26; j++){
        if (d == b[j]){
            f++;
        }
        
    }
    if(f > 1){
        printf("?");
    }
    else printf("%c",'A'+ e);
    
    free(a);
}

