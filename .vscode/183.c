#include <stdio.h>
int main(){
    int num[1000];
    int count=0;
    for (int i = 0; i < 1000; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (count == 1000)
				break;

			num[count] = i;
			count++;
		}
	}
    int n,m;
    scanf("%d %d",&n,&m);
    int result = 0;
    for(int i = n -1; i < m; i++){
        result = result + num[i];

    }
    printf("%d",result);
}