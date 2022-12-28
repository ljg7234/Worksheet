#include <stdio.h>
int main(){
    FILE *fp;
    char *str = "ABCDEFGHIJKL",*a = str,c;
    if((fp = fopen("171217","w")) == NULL){
        printf("오류");
    }
    else {
        while(*a != '\0' && putc(*a++,fp));
        fclose(fp);
    }
    if((fp = fopen("171217","r")) == NULL){
        printf("오류");
    }
    else {
        fseek(fp,2,SEEK_SET);
        printf("%d",ftell(fp));
        c = fgetc(fp);
        printf("%d",ftell(fp));
        putchar(c);
        fseek(fp,-2,SEEK_END);
        c = fgetc(fp);
        putchar(c);
        printf("%d",ftell(fp));
    }
    return 0;
}