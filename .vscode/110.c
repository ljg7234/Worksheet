#include <stdio.h>
struct info{
    char name[20]; // 이름
    double score; // 평점 평균
    int credit; // 취득 학점

};

int input_data(struct info *x,int a){
    for (int i = 0; i < a; i++){
        scanf("%s %d %lf",x[i].name,&x[i].credit,&x[i].score);
    }
}

int scholarship(struct info *x,int a){
    for (int i = 0; i < a; i++){
        if (x[i].credit >= 20 && x[i].score >= 4.3){
            printf("%s %d %lf",&x[i].name,x[i].credit,x[i].score);
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

