#include <stdio.h>
int main(){
    char *str1 = "2013 12 14 10 programming",str2[30],tmp[30];
    char x;
    int a,b;
    sscanf(str1,"%d%d",&a,&b);
    printf("%d %d\n",a,b);
    sprintf(str2,"%d%d",a,b);
    sscanf(str1,"%d%d%s",&a,&b,tmp);
    sprintf(str2,"%s%d%d",tmp,a,b);
    printf("%s",str2);
    return 0;
}