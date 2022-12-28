#include <stdio.h>
#include <string.h>
int main(){
    char str[101];
    scanf("%s",str);
    for(int i = 0; i < strlen(str); i++){
        if ((int)str[i] <= 90){
            str[i] = str[i] + 32;
            }
        else {
            str[i] = str[i] - 32;
        }

    }
    printf("%s",str);
}
