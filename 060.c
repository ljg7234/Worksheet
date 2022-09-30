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
    arr[0] = 23,arr[1] = 43,arr[2] = 28,arr[3] = 1,arr[4] = 9, arr[5] = 33,arr[6]=35;
    printf("보너스 번호를 입력하세요 -> \n");

    for (int i = 0; i < 5; i++){
        int n =0;
        int sad[7] = {0,};
        for (int j = 0; j < 6; j++){
            for (int q = 0; q < 6; q++){
                if (num[i][j] == arr[q]){
                    n ++;
                    sad[j] = num[i][j];
                }

            }
        }
        if (n == 5){
            for (int j = 0; j < 6; j++){
                if (num[i][j] == arr[6]){
                    n = n + 2;
                    sad[j] = arr[6];
                }
            }
        }
        
        printf("%d세트 번호 <%d %d %d %d %d %d> ->",i+1,num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5]);
        for (int i = 0; i < 6; i++){
            if (sad[i] != 0){
                printf(" %d",sad[i]);
            } 
            else (printf(" x")); 
        }
        x(n);
        printf("\n");
    
    }
}

int x(int a){
    if (a == 6){
            printf("(1등)");
        }
    else if (a == 5){
            printf("(3등)");
            
        }
    else if (a == 4){
            printf("(4등)");
        }
    else if (a == 3){
            printf("(5등)");
        }
    else if (a == 7){
            printf("(2등)");
        }
    else printf("(꽝)");
}