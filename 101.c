#include <stdio.h>
int main(){
    char *a[5] ={"0","10","80","20","10"};
    printf("%c", *a[2]- *a[4]);
}