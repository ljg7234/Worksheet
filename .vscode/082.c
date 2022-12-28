#include <stdio.h>
int main(){
    char *p[3][2] = {"abc", "defg", "hi", "jklmno", "pqrstuvw", "xyz"};
    printf("%s",(*(*(p+1)+1)+2));
}