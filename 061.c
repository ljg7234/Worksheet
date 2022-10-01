#include <stdio.h>
int main(){
    float i;
    scanf("%f",&i);
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    
    if (a > b && b > c){
        b= b/a*100;
        c= c/a*100;
    }
    else if (b > a && b > c){
        a = a/b*100;
        c = c/b*100;
    }
    else if (c > a && c > b){
        a = a/c*100;
        b = b/c*100;
    }
    printf("%f",(a+b+c)/100);
}