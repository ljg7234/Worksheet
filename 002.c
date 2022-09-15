#include <stdio.h>
int main(void)
{
    int f1 = 0, f2 = 1, f3;

    f3 = f1 + f2;
    while (f3 < 100)
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

    printf("100 보다 큰 피보나치 수열 중 가장 작은 값은 %d 입니다\n",f3);
    return 0;
}   
