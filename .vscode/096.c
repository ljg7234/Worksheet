#include <stdio.h>
int main(){
    char *a[2][3] = {"abc","defg","hijk","lmn","opqrs","uvwxyz"};
    printf("%c",*(*(*(a+1)+1)+1));
    printf("%c",**(a[1]));
    printf("%c",(*(*(a+1)))[1]);
    printf("%s",(*(*(a+1)+1)+3));
}