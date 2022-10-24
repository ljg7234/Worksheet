#include<stdio.h>
struct  abc {
	int a : 1, b : 16, c : 16;
} x;
 
int main()
{
	printf("sizeof(x) = %d", sizeof(x));
	return 0;
}