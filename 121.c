#include <stdio.h>
int main(){
    int sum = 0;
    int r=0,c=0;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            int input;
            scanf("%d",&input);
            if (input > sum){
                sum = input;
                r = i;
                c = j;


            }
        }
        
    }
    printf("%d\n",sum);
    printf("%d %d",r,c);
    return 0;
}