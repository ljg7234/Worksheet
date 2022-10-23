#include<stdio.h>
int main()
{
	int i=100, j=200, *p = &i, **q = &p;
	printf("i = %d, j = %d, *p = %d, **q = %d\n", i, j, *p, **q);
	printf("&i = %p, &j = %p, p = %p, *q = %p\n", &i, &j, p, *q);
	printf("&p = %p, q = %p\n", &p, q);
	*q = &j;
	printf("i = %d, j = %d, *p = %d, **q = %d\n", i, j, *p, **q);
	printf("&i = %p, &j = %p, p = %p, *q = %p\n", &i, &j, p, *q);
	printf("&p = %p, q = %p\n", &p, q);
	return 0;
}
// i, j, p, q 변수의 주소는 각각 300, 400, 500, 600이라고 가정