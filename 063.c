#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char arr[80];
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%s",arr);
        int sum = 0;
        int a = 1;
        for (int j = 0; j < strlen(arr); j++){
            if(arr[j] == 'O'){
                sum += a;
                a++;
            }
            else if(arr[j] == 'X'){
                a = 1;
            }
            
        }
        printf("%d\n",sum);
    }
}