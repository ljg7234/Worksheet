#include <stdio.h>
int main(){
    char *fruit="strawberry";
    for (int i =0; i < 10; i++){
        if (i % 2 != 0){
            continue;
        }
    printf("%c",*(fruit + i));
    }
}