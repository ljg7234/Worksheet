#include <stdio.h>
int main(){
    char c = 'A',s[] = "test string";
    int i = 1024;
    int j=9,k = 2;
    long l = 12345678;
    long long ll = 12345678901234LL;
    float f = 123.45678,f0 = 987.0;
    double d = -123.45678,d0 = 0.00000009;

    printf(">> 문자 출력 << \n");
    printf("%%c: |%c|, %%7c: |%7c|, %%+7c: |%+7c|\n",c,c,c);
    printf("%%s: |%s|, %%7s: |%7s|, %%+7s: |%+7s|\n",s,s,s);  
    printf("%%.7s: |%.7s|, %%10.7s: |%10.7s|, %%+10.7s: |%+10.7s|\n",s,s,s);
    printf("C는 재미있는 %n\n",&j);
    printf("%*c프로그래밍 언어입니다\n",4,' '); 
    printf("%d",j);
}