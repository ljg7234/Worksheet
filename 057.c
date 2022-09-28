#include <stdio.h> 
void func(int (*) (int,int));
int sum (int,int);
int mul (int,int);
int main(){
    int i;
    scanf("%d",&i);
    switch(i){
        case 1: func(sum); break;
        case 2: func(mul); break;
    }

}

int sum (int a,int b){
    return a + b;
}
int mul (int a,int b){
    return a * b;
}

void func(int (*fp)(int,int)){
    int a,b;
    int res;
    printf("두 숫자를 입력하세요\n");
    scanf("%d %d",&a,&b);
    res = fp(a,b);
    printf("%d",res);
}