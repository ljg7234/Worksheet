#include <stdio.h>
struct info{
    char name[20]; // 이름
    double score; // 평점 평균
    int credit; // 취득 학점

};

void input_data(struct info* a,int x)
{
    for (int i = 0; i < x; i ++){
        scanf("%s %d %lf",a[i].name,&a[i].credit,&a[i].score);
    }
    printf("\n");
}

void scholarship(struct info *a,int x){
    for (int i = 0; i < x; i ++){
        if (a[i].credit >= 20 && a[i].score >= 4.3){
            printf("%s %d %.2lf\n",&a[i].name,a[i].credit,a[i].score);
        }
    }
}

int main(void)

{
    struct info students[5]; // 5명의 학생
    input_data(students, 5); // 이름, 평점 평균, 취득 학점을 입력받는 함수
    scholarship(students, 5);
    return 0;

}


