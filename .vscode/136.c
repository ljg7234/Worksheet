#include <string.h>
#include <stdio.h>
int main(){
    int a,num;
    char b[10];
    scanf("%d",&a);
    num = a;
    for (int i = 0; i < a; i++){
        int alpha[26]={0,};
        char first = '0';
        scanf("%s",b);
        for (int j = 0; j < strlen(b); j++){
            if(first != b[j]){
                first = b[j];
                alpha[b[j]-'a'] += 1;
            }
            
            if(alpha[b[j]-'a'] == 2){
                num-=1;
                break;
            }
        }
    }
    printf("%d",num);
}