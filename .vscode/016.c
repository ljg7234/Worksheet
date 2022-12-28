#include <stdio.h>
void func(int(*)(int,int));
int sum(int,int);
int mul(int,int);
 
int main(void){
    int num;
    printf("두 정수의 합:1, 두 정수의 곱:2\n");
    printf("숫자를 입력하세요: ");
    scanf("%d\n",&num);
    switch(num){
        case 1: func(sum); break;
        case 2: func(mul); break;
    }
    return 0;
}

void func(int(*fp)(int,int))
{
    int a,b;
    int res;
    printf("두 정수값을 입력하세요");
    scanf("%d %d",&a,&b);
    res=fp(a,b);
    printf("결과: %d",res);

}

int sum(int a, int b)
{
    return a+b;
}

int mul(int a, int b)
{
    return a*b;
}
