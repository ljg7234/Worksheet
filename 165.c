#include <stdio.h>
int main(){
    int sum;
    scanf("%d",&sum);
    int k = 1;
    while(1) {
        if((k-1)* k / 2 < sum && sum < k * (k + 1) / 2) {
            break;
        }
        k++;
    }

    if (k % 2 != 0) {
		int a = k*(k + 1) / 2;
		printf("%d", (a-sum) + 1);
		printf("/");
		printf("%d", k -(a -sum));
	
	}
    else {
		    int a = k * (k + 1) / 2;
		    printf("%d",k-(a-sum));
		    printf("/");
		    printf("%d",(a-sum) + 1);
	}


}