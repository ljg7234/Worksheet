#include <stdio.h>
void change(int);
int main(void)
{
    int n = 3;
    change(n);
    printf("함수 호출 후 n : %d\n",n);
    return 0;

}

void change(int x)
{
    x=100;
    return;
}