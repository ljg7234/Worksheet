#include <stdio.h>
#include <string.h>
struct name_grade{
    int grade;
    char name[10];
};
int main(void){
    struct name_grade st_g1,st_g2;
    strcpy(st_g1.name,"이순신");
    st_g1.grade = 98;
    st_g2 =  st_g1;
    printf("%s의 점수는 %d입니다",st_g2.name,st_g2.grade);
}