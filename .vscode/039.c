#include <stdio.h>
#include <string.h>

int main() {

	int arr[26];
	char S[100];
	scanf("%s", S);
	int i, j;

	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	for (i = 97; i <= 122; i++)
	{

		for (j = 0; j < strlen(S); j++)
		{
			if (S[j] == i)
			{
				arr[S[j] -'a'] = j;
				break;
			}
		}
	}
		for (i = 0; i < 26; i++) {

			printf("%d ", arr[i]);
			
		}
	
	return 0;
}