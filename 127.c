#include <stdio.h>
#include <string.h>
int main(){
    int i,x; 
    char a[20];
    scanf("%d",&i);
    for (int v = 0; v < i; v++){
        scanf("%d %s",&x,a);
        for (int g = 0; g < strlen(a); g++){
            for (int h = 0; h < x; h++){
                printf("%c",a[g]);
            }
        }
        printf("\n");
    }
    
}