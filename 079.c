#include <stdio.h>
int main(void) {

    char a[2][3][7]={"dog", "cat", "horse", "pig", "duck", "bird"};

    printf("%c %s\n",a[0][2][3] ,&a[1][2][2]);
    printf("%c %s\n",*(*((*a)+1)+2),(*(*(a+1)+1)+2));
    return 0;

}