#include <stdio.h>
int main(){
    int x();
    int num[5][6] = {
        {1,2,3,4,5,6},
        {10,15,25,35,40,42},
        {1,9,11,22,23,25},
        {9,28,31,34,35,36},
        {1,9,23,28,33,35}
    };

    
    int arr[7];
    printf("금주의 로또 번호를 입력하세요 -> ");
    arr[0] = 10,arr[1] = 15,arr[2] = 25,arr[3] = 35,arr[4] = 40, arr[5] = 6,arr[6]=42;
    printf("보너스 번호를 입력하세요 -> ");

    for (int i = 0; i < 5; i++){
        int n =0;
        for (int j = 0; j < 6; j++){
            for (int q = 0; q < 6; q++){
                if (num[i][j] == arr[q]){
                    n ++;
                }
            }
        }
        if (n == 5){
            for (int j = 0; j < 6; j++){
                if (num[i][j] == arr[6]){
                    n = n + 2;
                }
            }
        }
        x(n);
        printf("\n");
    
    }
}

int x(int a){
    if (a == 6){
            printf("1등입니다");
        }
    else if (a == 5){
            printf("2등입니다");
            
        }
    else if (a == 4){
            printf("4등입니다");
        }
    else if (a == 3){
            printf("5등입니다");
        }
    else if (a == 7){
            printf("2등입니다");
        }
    else printf("꽝입니다");
}