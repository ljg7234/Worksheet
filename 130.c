#include <stdio.h>
#include <string.h>
int main(){
    char a[1000000];
    int num = 0,len;
    scanf(" %[^\n]",a);
    len = strlen(a);
    if (len == 1){
        if (a[0] == ' '){
            printf("0\n");
            return 0;
        }
    }

    
    for (int i = 1; i < len - 1; i++){
        if (a[i] == ' '){
            num++;
        }
    }
    printf("%d\n",num+1);
    return 0;
}