#include <stdio.h>
union won_dollar {
    int won;
    double dollar;
};
struct product {
    char *name;
    _Bool w_d;
    union won_dollar price;
};

int main(){
    struct product p = {"제품",1,{.dollar = 99.99}};
    printf("%s %.2f ",p.name,p.price.dollar);
}