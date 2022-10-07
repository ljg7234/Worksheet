 #include <stdio.h>
 


 int main(void){
    void bit_print(int);
    int i;
    printf("정수를 입력하세요 ");
    scanf("%d",&i);
    printf("%d 비트열 : ",i);
    bit_print(i);
    printf("\n");
    return 0;
 }

  void bit_print (int a){
    int i;
    int n = sizeof(int) *8;
    int mask = 1 << (n-1);
    for (i = 1; i <=n; i++){
        putchar(((a & mask) == 0) ? '0' : '1');
        a <<= 1;
        if (i % 8 == 0 && i < n)
            putchar(' ');
    }
 }