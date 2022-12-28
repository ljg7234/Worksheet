#include <stdio.h>
int main(void)
{
    int math = 0, english = 0, fail = 0;

    printf("수학 점수(정수):");
    scanf("%d",&math);
    printf("영어 점수(정수):");
    scanf("%d",&english);

    math >= 60 || fail ++; //math가 60 미만일 때에만 fail++ 실행
    english >= 60 || fail ++; //english가 60 미만일 때에만 fail++ 실행

    fail && printf("낙제 과목 수는 %d 개 입니다\n",fail);

    return 0; 
}