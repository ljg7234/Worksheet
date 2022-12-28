#include <stdio.h> 
#include <string.h>
typedef struct _student{
    char name[10];
    char email[10];
    char phone[10];
}student;

int search_name(char *xx,student q[10]){
    for (int i = 0; i < 10; i++){
        if (strcmp(xx,q[i].name) == 0){
            printf("%s %s\n",q[i].email,q[i].phone);
        }

    }
    return 0;
}
int main(){
    int i;
    char xx[10];
    student a[10];
    for (int i = 0; i < 10; i++){
        printf("%d ",i);
        scanf("%s %s %s",a[i].name,a[i].email,a[i].phone);
    }
    scanf("%d",&i);
    scanf("%s",xx);
    search_name(xx,a);
}
