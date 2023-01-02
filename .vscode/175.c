#include <stdio.h>
#include <string.h>
int main(){
    char word[11];
    char num;
    scanf("%s",word);
    for(int i = 0; i < strlen(word); i++){
        for(int j = 0; j < strlen(word); j++){
            if((int)word[i] > (int)word[j]){
                num = word[i];
                word[i] = word[j];
                word[j] = num;
            }
        }
    }
    printf("%s",word);
}