#include <stdio.h>
#include <string.h>
int main(){
    char i[102];
    scanf("%s",i);
    for (int a = 0; ;a++){
       if (i[a] == '\0'){
        break;
         } 
    }
    printf("%d",strlen(i));
}