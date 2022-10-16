#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct name_sort {
    char *name;

}name_sort;

int compare (const void *p,const void *q){
    return strcmp(((name_sort *)p) -> name,((name_sort *)q) -> name);
}
int main(){
    name_sort stu[6] = {"kim","lee","park","choi","jung","cho"};
    qsort(stu,6,sizeof(name_sort),compare);
    for (int i= 0; i < 6; i++){
        printf("%s\n",stu[i].name);
    }
}