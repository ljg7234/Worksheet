#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void cntrl_c_handler(int sig){
    char answer[4];
    printf("%d번 신호가 발생했습니다 \n",sig);
    printf("계속 하시겠습니까 (y/n)");
    scanf("%s",answer);
    if ((answer[0] == 'n') || (answer[0] == 'N'))
        exit(1);
}

int main(){
    int i = 0;
    signal(SIGINT,cntrl_c_handler);
    while(1){
        printf("%4d",rand() % 1000);
        if ((++i % 5) == 0){
            i = 0;
            putchar('\n');
        }
    }
    return 0;
}

