#include <stdio.h>
#define ERRPRINTF(...) printf("오류 : (" __FILE__ " 파일) "__VA_ARGS__)
int main(){
    float divisor,dividend;
    printf("*******나누기 프로그램 *******\n");
    printf("피제수를 입력하세요 :");
    scanf("%f",&dividend);
    printf("제수를 입력하세요 :");
    scanf("%f",&divisor);

    if (divisor == 0.0)
        ERRPRINTF("제수가 %.3f  입니다,\n",divisor);
    else 
        printf("%.3f / %.3f = %.3f",dividend,divisor,dividend / divisor);
    return 0;
}