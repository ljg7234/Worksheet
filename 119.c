#include <stdio.h>

int main()
{
	int a = 15, b = 10, c = 5;

	a += b += c;

	printf("%5d%5d%5d\n", a,b,c);
	{
		int b = 0;
		int c = 10;
		
		a = c = b;

		printf("%5d%5d%5d\n", a, b, c);
	}
	printf("%5d%5d%5d\n", a, b, c);
}
