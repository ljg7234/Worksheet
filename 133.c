#include <stdio.h>
#include <stdlib.h>
typedef struct student{
    int id;
    char name[10];
    int grade[3];
    float avg;
} student;

int selectNum(void);
int main(int argc,char **argv){
    FILE *fp;
    int check,id,sel;
    student st = {0,"",{0},0.0};

    if (argc != 2){
        fprintf(stderr,"사용법 : %s grade_file\n",argv[0]);
        exit(1);
    }

    if ((fp = fopen(argv[1],"rb+")) == NULL){
        fprintf(stderr,"오류 : %s 파일을 열 수 없습니다 \n",argv[1]);
        exit(1);
    }
    sel = selectNum;

    while(sel){
        switch(sel){
            case 1: 
                rewind(fp);
                fprintf(stderr, "번호 이름     수학 영어 과학  평균\n");
                check = fread(&st,sizeof(student),1,fp);
                while (check){
                    fprintf(stderr,"%3d %-9s %3d %3d %3d %6.2f\n",st.id,st.name,st.grade[0],st.grade[1],st.grade[2],st.avg);
                    check = fread(&st,sizeof(student),1,fp);
                }
                break;
            case 2:
                fprintf(stderr,"학생 id :");
                scanf("%d",&id);
                fseek(fp,sizeof(student) * (id -1),SEEK_SET);
                check = fread(&st,sizeof(student),1,fp);
                fprintf(stderr,"번호 : %3d 이름 : %9s \n",st.id,st.name);
                fprintf(stderr,"수학 : %3d 영어 : %3d, 과학 : %3d \n",st.grade[0],st.grade[1],st.grade[2]);
                fprintf(stderr,"평균 : %.2f\n",st.avg);
                break;
            case 3:
                fprintf(stderr,"이름과 성적을 입력하세여 :");
                check = scanf("%s %d %d",st.name,&st.grade[0],&st.grade[1],&st.grade[2]);
                fseek(fp,0,SEEK_END);
                st.id = ftell(fp) / sizeof(student) +1;
                st.avg = (st.grade[0] + st.grade[1] + st.grade[2]) / 3.0;
                fwrite(&st,sizeof(student),1,fp);
                fflush(fp);
                break;
            case 4:
                fprintf(stderr,"학생 ID :");
                scanf("%d",&id);
                fseek(fp,sizeof(student) * (id -1),SEEK_SET);
                check = fread(&st,sizeof(student),1,fp);
                fprintf(stderr,"%s 학생 성적을 입력하세요 :",st.name);
                check = scanf("%s %d %d",st.name,&st.grade[0],&st.grade[1],&st.grade[2]);
                st.avg = (st.grade[0] + st.grade[1] + st.grade[2]) / 3.0;
                fseek(fp,-sizeof(student),SEEK_CUR);
                fwrite(&st,sizeof(student),1,fp);
                fflush(fp);
                break;
            case 5:
                rewind(fp);
                check = fread(&st,sizeof(student),1,fp);
                while(check){
                    st.avg = (st.grade[0] + st.grade[1] + st.grade[2]) / 3.0;
                    fseek(fp,-sizeof(student),SEEK_CUR);
                    fwrite(&st,sizeof(student),1,fp);
                    check = fread(&st,sizeof(student),1,fp);
                }
                fprintf(stderr,"성적 처리 완료");
                break;
            default :
                fprintf(stderr,"잘못된 번호입니다 다른 번호를 선택하세요\n");

        }
    }
    fprintf(stderr,"프로그램을 종료합니다 ");
    fclose(fp);
    return 0;
}

int selectNum(void){
        int num;
        fprintf(stderr,"\n\n원하는 번호를 입력하세요.\n");
        fprintf(stderr,"1:전체 성적 출력\n");
        fprintf(stderr,"2:학생별 출력\n");
        fprintf(stderr,"3:성적 추가\n");
        fprintf(stderr,"4:성적 수정\n");
        fprintf(stderr,"5:성적 처리\n");
        fprintf(stderr,"0:종료\n");
        fprintf(stderr,"input > ");
        scanf("%d",&num);
        return num;
    }
