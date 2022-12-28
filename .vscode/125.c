#include <stdio.h>
int main(void){
    int arr[10001], i, check;
    int sum(int n);
    for(i=1; i<10001; i++)
    {
        check = sum(i);
        if(check <10001)       //셀프 넘버가 아닌 수 확인
            arr[check]=1;
    }
    
    for(i=1; i<10001; i++)
    {
        if(arr[i]!=1)          //셀프 넘버 수 확인
            printf("%d\n", i);
    }
    return 0;
}
    int sum(int n){
        int sum = n;    
        while(n>0){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
 