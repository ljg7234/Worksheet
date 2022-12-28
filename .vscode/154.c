#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){
    FILE *ofp;
    int temp[10] = {1};
    char read[4];
    int f_size,num_block,num_block_remain,check;

    for(int i = 1; i < 10; i++){
        temp[i] = temp[i - 1] * 10;
    }
    ofp = fopen("b_file","wb+");
    for (int i = 0; i < 10; i++){
        fwrite(&temp[i],sizeof(int),1,ofp);
    }
    rewind(ofp);
    printf("%d\n",sizeof(temp));
    fread(read,sizeof(int),1,ofp);
    printf("1) %d ",*((int *)read));
    printf("2) %d ",ftell(ofp));
    fseek(ofp,0,SEEK_END);
    printf("3) %d",ftell(ofp));
    fclose(ofp);
    return 0;
}