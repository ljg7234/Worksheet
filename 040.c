#include <stdio.h>
#include <string.h>
int main(){
    int T; 
    char a[1000];
    scanf("%d",&T);
    for (int i = 0; i < T; i++){
        scanf("%s",a);
        printf("%c %c",a[0],a[strlen(a)-1]);
        
    }

}