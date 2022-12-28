#include <stdio.h>
struct info{

char name[20]; // 이름

double score; // 평점 평균

int credit; // 취득 학점

};



void input_data(struct info *st,int y){
    for (int i = 0; i < y; i++){
        scanf("%s %f %d",st -> name,&st ->score,st -> credit);
    }
}


void scholarship(struct info *st,int y){
    for (int i = 0; i < y; i++){
        if ((st+i) ->credit >= 20 && (st+i) ->score >=4.3){
            printf("%s %.2f %d\n",(st + i)->name,(st +i) ->score,(st +i) ->credit);
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
