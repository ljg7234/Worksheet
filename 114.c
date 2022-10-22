#include <stdio.h>

#define PI 3.14

#define AREA(r) ((r) * (r) * PI)

float area_f(float r) { return r * r * PI;}

int main(void)

{
    float a;
    int i = 1;
    printf("By macro\nr area\n");
    while (i <= 10){
    printf("%d : ", i);
    a = AREA(i);
    i++;
    printf("%.2f\n", a);
    }
    i = 1;
    printf("By inline function\nr area\n");
    while (i <= 10){

    printf("%d : ", i);

    a = area_f(i++);

    printf("%.2f\n", a);

    }

    return 0;

}