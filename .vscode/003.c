#include <stdio.h>
int main(void)
{
    int i = 1, sum = 0, n = 10;
    for  (i=1; i <=n; i++)
        sum += i;
    printf("1부터 %d까지의 합 : %d\n",n,sum);
    return 0;    
}