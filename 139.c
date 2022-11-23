#include <stdio.h>
char* mygets(char *a);
int main(){
    char input[100];
    printf("문자열 입력 :");
    mygets(input);
    printf("입력 문자열 :");
    printf("%s",input);
    printf("입력 끝");
    return 0;

}

char* mygets(char *a){
    char v;
    int i = 0;
    while(1){
        v = getchar();
        if (v == '\n'){
            break;
        }
        a[i] = v;
        i++;
    }
    return a;
}