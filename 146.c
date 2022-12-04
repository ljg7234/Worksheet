#include <stdio.h>
int main(){
    FILE *ofp;
    ofp = fopen("myfile","w");
    fprintf(ofp,"test");
    getchar();
    fclose(ofp);
    getchar();
    return 0;
}