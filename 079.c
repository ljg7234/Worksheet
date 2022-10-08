#include <stdio.h>
int main(void) {

    char a[2][3][7]={"dog", "cat", "horse", "pig", "duck", "bird"};

    printf("%c %c\n",*(*((*a)+1)+2),*(*(*(a+1)+1)+2));
    return 0;

}