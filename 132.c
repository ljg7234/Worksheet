#include <stdio.h>

typedef struct student {
    int id;
    char name[10];
    int grade[3];
    float avg;
} student;


int main(int argc, char** argv) {
    FILE* ofp;
    int check, id;
    student st = { 0,"",{0},0.0 };

    if (argc != 2) {
        fprintf(stderr, "실행오류 : \n %s grade_file\n", argv[0]);
        exit(1);
    }

    if ((ofp = fopen(argv[1], "wb")) == NULL) {
        fprintf(stderr, "오류 : %s 파일을 열 수 없습니다 \n", argv[1]);
        exit(1);
    }

    fprintf(stderr, "성적을 입력하세요\n");
    fprintf(stderr, "입력 형식: 이름 수학성적 영어성적 과학성적\n");

    id = 1;
    check = scanf("%s %d %d %d", st.name, &st.grade[0], &st.grade[1], &st.grade[2]);
    while (check != EOF) {
        st.id = id++;
        fwrite(&st, sizeof(student), 1, ofp);
        check = scanf("%s %d %d %d", st.name, &st.grade[0], &st.grade[1], &st.grade[2]);
    }
    fclose(ofp);
    return 0;

}

 
