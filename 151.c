#include <stdio.h>
#define HELLO(man,...) printf(#man " said %s.\n",__VA_ARGS__);
int main(){
    HELLO(James,"hello","SW");
    return 0;
}