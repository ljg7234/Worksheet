#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    scanf("%s",a);
    int k = strlen(a);
    for (int i = 0; i < strlen(a); i++){
        if (a[i] == 'c'){
            if (a[i+1] == '='){
                k--;
            }
            else if(a[i+1] == '-'){
                k--;
            }
        }
        else if (a[i] == 'd'){
            if (a[i+1] == 'z'){
                if (a[i+2] == '='){
                    k--;
                }
            }
            else if(a[i+1] == '-'){
                k--;
            }
        }
        else if (a[i] == 'l'){
            if (a[i+1] == 'j'){
                k--;
            }
        }
        else if (a[i] == 'n'){
            if (a[i+1] == 'j'){
                k--;
            }
        }
        else if (a[i] == 's'){
            if (a[i+1] == '='){
                k--;
            }
        }
        else if (a[i] == 'z'){
            if (a[i+1] == '='){
                k--;
            }
        }
        
    }
    printf("%d",k);
}