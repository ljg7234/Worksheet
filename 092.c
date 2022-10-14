#include <stdio.h> 
#include <string.h>
struct grade{
    char name[10];
    int id;
    char grade1[5];
    double grade2;

};

int ham1(struct grade *x, int a);
int ham2(struct grade *x, int a);

int main(){
    struct grade students[5];
    ham1(students,5);
    ham2(students,5);
    printf("%s %d %s %lf",students[1].name,students[3].id,&students[2].grade1,students[0].grade2);
}


int ham1(struct grade *x,int a){
    for (int i = 0; i < a; i++){
        scanf("%s %d %s",(x + i) ->name, &x[i].id,(x +i) ->grade1);
    }
    return 0;
}
int ham2(struct grade *x,int a){
    for (int i = 0; i < a; i++){
        if (strcmp(x[i].grade1,"A+")==0) x[i].grade2=4.5;
		else if (strcmp(x[i].grade1,"A0")==0) x[i].grade2=4.3;
		else if (strcmp(x[i].grade1,"A-")==0) x[i].grade2=4.0;
		else if (strcmp(x[i].grade1,"B+")==0) x[i].grade2=3.5;
		else if (strcmp(x[i].grade1,"B0")==0) x[i].grade2=3.3;
		else if (strcmp(x[i].grade1,"B-")==0) x[i].grade2=3.0;
		else if (strcmp(x[i].grade1,"C+")==0) x[i].grade2=2.5;
		else if (strcmp(x[i].grade1,"C0")==0) x[i].grade2=2.3;
		else if (strcmp(x[i].grade1,"C-")==0) x[i].grade2=2.0;
		else if (strcmp(x[i].grade1,"D+")==0) x[i].grade2=1.5;
		else if (strcmp(x[i].grade1,"D-")==0) x[i].grade2=1.0;
		else if (strcmp(x[i].grade1,"F")==0) x[i].grade2=0.0;
    }
    return 0;
}   

