#include <string.h>
#include <stdio.h>
int main(){
    int a,num;
    char b[10];
    scanf("%d",&a);
    num = a;
    for (int i = 0; i < a; i++){
        scanf("%s",b);
        if (strlen(b) == 1){
            continue;
        }
        for (int j = 0; j < strlen(b); j++){
            for (int k=0; k < strlen(b) -2; k++){
                if (b[j] != b[j+1] && b[j] == b[j+k+2]){
                    num--;
                    continue;
                }
            }
            
        }
    }
    printf("%d",num);
}