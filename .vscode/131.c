#include <stdio.h>

typedef struct student {
    int id;
    char name[10];
    int grade[3];
    float avg;
} student;


int main(int argc, char** argv) {
    FILE* ifp;
    int check;
    student st = { 0,"",{0},0.0 };

    if (argc != 2) {
        fprintf(stderr, "실행오류 : \n %s grade_file\n", argv[0]);
        exit(1);
    }

    if ((ifp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "오류 : %s 파일을 열 수 없습니다 \n", argv[1]);
        exit(1);
    }

    fprintf(stderr, "입력 형식: 이름 수학성적 영어성적 과학성적\n");

    check = fread(&st,sizeof(student),1,ifp);
    while (check) {
        printf("%3d %-5s %3d %3d %3d\n",st.id,st.name,st.grade[0],st.grade[1],st.grade[2]);
        check = fread(&st,sizeof(student),1,ifp);
    }
    fclose(ifp);
    return 0;
}