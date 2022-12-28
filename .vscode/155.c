#include <stdio.h>
#define TRY(x,y) (x*y)/2
#define TRY2(x,y) (x*y)
int main(){
    float a,b;
    float w = 3.0,h = 3.0;
    a = TRY(1,1);
    b = TRY2(w+1.0,h+1.0);
    printf("%.2f %.2f",a,b);
    return 0;
}