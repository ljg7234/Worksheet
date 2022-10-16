#include <stdio.h>
struct student{
    char name[20];
    double grade;
};

void fn(struct student *x){
    printf("이름을 입력하세요 :");
    scanf("%s", x ->name);
    printf("학점을 입력하세요 :");
    scanf("%lf",&x ->grade);
    return ;
}

int main(){
    struct student stu = {0};
    fn(&stu);
    printf("%s %f",stu.name,stu.grade);
}