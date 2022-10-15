#include <stdio.h>
void fn (char *a[2][2]){
    printf("%d",sizeof(a));
}
int main(){
    char *a[2][2] = {"apple","banana","coco","domanga"};
    printf("%d",sizeof(a));
    fn(a);
    printf("%d",sizeof(a[0][0]));
    printf("%d",sizeof(*a[0][0]));
    return 0;
}