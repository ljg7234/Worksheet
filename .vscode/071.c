#include <stdio.h>
int main() {
    double j=20;
    void *v;
    v=&j;
    printf("%f",*(double *)v);
    return 0;

}

 

