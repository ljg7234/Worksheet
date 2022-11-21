#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int x;
    int y;
}abc;
int compare(const void *first,const void *second);

int  main(){
    int n;
    scanf("%d",&n);
    abc* list;
    list = (abc*)calloc(n,sizeof(abc));
    for (int i = 0; i < n; i++){
        scanf("%d %d",&list[i].x,&list[i].y);
    }

    qsort(list,n,sizeof(abc),compare);

    for (int i = 0; i < n; i++){
        printf("%d %d\n",list[i].x,list[i].y);
    }
}

int compare(const void *first,const void *second){  
    abc* a = (abc*)first;
    abc* b = (abc*)second;
    if (a->y > b->y){
        return 1;
    }
    else if (a->y < b->y){
        return -1;
    }    
    else if (a->x < b->x){
        return 0;
    }    
}