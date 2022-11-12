#include <stdio.h>
#include <string.h>
int main(){
    char a[15];
    int sum = 0;
    scanf("%s",a);
    for (int i = 0; i < strlen(a); i++){
        if (a[i] < 'A' + 3){      //ABC
            sum += 3;
        }
        else if (a[i] > 'A' +2 && a[i] < 'A' + 6){  //DEF
            sum += 4;
        }
        else if (a[i] > 'A' +5 && a[i] < 'A' + 9){  //GHI
            sum += 5;
        }
        else if (a[i] > 'A' +8 && a[i] < 'A' + 12){
            sum += 6;
        }
        else if (a[i] > 'A' +11 && a[i] < 'A' + 15){
            sum += 7;
        }
        else if (a[i] > 'A' +14 && a[i] < 'A' + 19){
            sum += 8;
        }
        else if (a[i] > 'A' +18 && a[i] < 'A' + 22){
            sum += 9;
        }
        else if (a[i] > 'A' +21 && a[i] < 'A' + 26){
            sum += 10;
        }
    }
    printf("%d",sum);
        
    
}