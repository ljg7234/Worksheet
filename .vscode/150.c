#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *link;
} DATA, *PDATA;
PDATA nodeAlloc(int data){
    PDATA p = (PDATA)malloc(sizeof(DATA));
    p -> data = data;
    p -> link = NULL;
    return p;
}
int main(){
    PDATA head = NULL, p = NULL;
    head = nodeAlloc(1);
    p = nodeAlloc(2);
    p -> link = head;
    head = p;
    p = nodeAlloc(3);
    p -> link = head;
    head = p;
    for(p = head; p; p = p -> link)
        printf("%d",p -> data);
    return 0;
}    
