#include <stdio.h>
#include <string.h>
typedef struct {
    char name[10];
    char number[14];
    char email[20];
} id;

void num(char *x,id a[]);
void all(char *x,id a[]);
int main(){
    int nu;
    id a[10]={{"a","0","q"},{"b","1","w"},{"c","2","e"},{"d","3","r"},{"e","4","t"},{"f","5","y"},{"g","6","u"},{"h","7","i"},{"i","8","o"},{"j","9","p"}};
    char input[10];
    scanf("%d",&nu);
    switch (nu){
        case 0:
            scanf("%s",input);
            num(input,a);
        case 1:
            scanf("%s",input);
            all(input,a);

    }
}

void num(char *x,id a[]){
    for (int i = 0; i < 10; i++){
        if (strcmp(x,a[i].name) == 0){
            printf ("%s %s",a[i].number,a[i].email);
        }
         
    }
}

void all(char *x,id a[]){
    for (int i = 0; i < 10; i++){
        if (strcmp(x,a[i].name) == 0){
            printf ("%s %s",a[i].number,a[i].email);
        }
        else if (strcmp(x,a[i].number) == 0){
            printf ("%s %s",a[i].name,a[i].email);
        }
        else if (strcmp(x,a[i].email) == 0){
            printf ("%s %s",a[i].number,a[i].name);
        }
         
    }
}

