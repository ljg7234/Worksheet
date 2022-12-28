#include <stdio.h>
#include <string.h>
struct student{
    char *name;
    double grade;
};

int main(){
    struct student stu1 = {"hond"};
    struct student stu2 = {"kim"};

    if (strcmp(stu1.name,stu2.name) == 0){
        printf("이름이 같습니다");
    }
    else {
        printf("이름이 다릅니다");
    }
    return 0;
}