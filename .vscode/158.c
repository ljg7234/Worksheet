#include <stdio.h>
#include <stdlib.h>
typedef struct test{
    int data;
    struct test* next;
}test;

int main(){
    int i;
    test * current,*tmp,*start;
    start = (test*)malloc(sizeof(test));
    start -> data= 0;
    start -> next = NULL;
    current = start;
    for(i = 1; i < 5; i++){
        tmp = (test*)malloc(sizeof(test));
        tmp -> data = i +i;
        tmp -> next = NULL;
        current -> next = tmp;
        current = tmp;
    }
    current = start;
    for(i = 1; i < 3; i++){
        current = current -> next;

    }
    printf("%d",current -> data);
    return 0;
}