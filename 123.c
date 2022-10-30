#include <stdio.h>
int hansoo(int num);
int main(){
    int num;
    scanf("%d",&num);
    hansoo(num);

}

int hansoo(int num){
    if (num < 100){
        printf("%d",num);

    }
    else {
        int a,b,c,sum = 0;
        for (int i = 100; i <= num; i++){
            a = num / 100;
            b = num / 10 % 10;
            c = num % 10;
            if (c - b == b - a){
                sum++;
            }
            
        }
        printf("%d",sum+99);
        
    }
    return 0;
}