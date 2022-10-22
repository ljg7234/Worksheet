#include<stdio.h>
int main()
{
	int a[5] = {2,4,6,8,10};
	int *p = a;
	int i;
	printf("%p\n",a);
    *p++;
	*(p+1) += 3;
	a[3] = *p + 1;
	a[4] = *(a+3) + 10;
	for(i = 0; i<5;i++)
	{
    	printf("%d ",a[i]);
	}
    printf("%p ",a);
	return 0;
}