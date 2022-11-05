#include <stdio.h>
int main(){
    char i[3],j[3];
    scanf("%s %s",i,j);
    int a=0,c=0,z=0;
    a = a + 100 * (i[2] - '0');
    a = a + 10 * (i[1] - '0');
    a = a + (i[0] - '0');
    z = z + (j[0] -'0');
    printf("%d\n",z);
    c = c + 100 * (j[2] - '0');   
    c = c + 10 * (j[1] - '0');
    c = c + j[0] - '0';
    printf("%d %d\n",a ,c);
    printf("%c",i[2]);


}