#include <stdio.h>
int main(void){
    
    int math;
    printf("수학 점수를 입력하세여\n");
    scanf("%d",&math);
    
    switch(math/10){
        case 10 :
            printf("수학은 A입니다\n");
            break;
        case 9 :
            printf("수학은 A입니다\n");
            break;
        case 8 :
            printf("수학은 A입니다\n");
            break;
        case 7 :
            printf("수학은 A입니다\n");
            break;
        case 6 :
            printf("수학은 B입니다\n");
            break;
        case 5 :
            printf("수학은 B입니다\n");
            break;
        case 4 :
            printf("수학은 B입니다\n");
            break;
        case 3 :
            printf("수학은 C입니다\n");
            break;
        case 2 :
            printf("수학은 C입니다\n");
            break;
        case 1:    
            printf("수학은 D입니다\n");
            break;                          
    }

}