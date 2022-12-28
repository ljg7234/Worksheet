#include <stdio.h>
void hansoo(int num);
int main(){
    int num;
    scanf("%d",&num);
    hansoo(num);

}

void hansoo(int num){
    if (num < 100){
        printf("%d",num);

    }
    else {
        int a,b,c,sum = 0;
        for (int i = 100; i <= num; i++){
            a = i / 100;
            b = i / 10 % 10;
            c = i % 10;
            if ((c - b) == (b - a)){
                sum++;
            }
            
        }
        printf("%d",sum+99);
        
    }
}