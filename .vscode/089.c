#include <stdio.h>
#include <time.h>
int main(){
    struct tm *t;
    time_t now;
    now = time(NULL);
    t = localtime(&now);
    printf("오늘은 %d년 %d월 %d일입니다\n ",t -> tm_year + 1900,t -> tm_mon+1, t-> tm_mday);
    printf("현재 시간은 오후 %d시 %d분 %d초 입니다 ",t -> tm_hour-12,t -> tm_min, t-> tm_sec);
}