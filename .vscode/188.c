#include <stdio.h>
#include <stdlib.h>
int leak[1001];
int tape[1001];
int compare(const void *first, const void *second)
{
    int num1 = *(int *)first;
    int num2 = *(int *)second;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main()
{
    int n, l;
    int count = 0;
    scanf("%d %d", &n, &l);
    for (int a = 0; a < n; a++)
    {
        scanf("%d", &leak[a]);
    }
    qsort(leak, n, 4, compare);
    for (int a = 0; a < n; a++)
    {
        if (tape[leak[a]] == 0)
        {
            for (int b = 0; b < l; b++)
                tape[leak[a] + b] = 1;
            count++;
        }
    }
    printf("%d\n", count);
}
 