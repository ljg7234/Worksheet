#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i= 0; i < a; i++){
        int c;
        int sum =0,div =0;
        int num[100];
        double q = 0;
        scanf("%d",&c);
        for (int j = 0; j < c; j++){
            scanf("%d",&num[j]);
            sum += num[i];
            
        }
        q = (double) sum / c;
        for (int k = 0; k < c; k++){
            if (num[k] > q){
                div ++;
            }
        }
        printf("%.3f%%",(double) div *100 / c);

    }
}