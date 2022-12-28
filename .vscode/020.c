
#include<stdio.h>
int main() {
    int T;
    int i, val1, val2;
    scanf("%d", &T);
    for (i = 0;i < T;i++) {
        scanf("%d %d", &val1, &val2);
        printf("%d\n", val1 + val2);
    }
    return 0;
}