#include <stdio.h>
#define WON 0
#define DOLLAR 1
union won_dolar{
    int won;
    float dollar;
};
typedef struct{
    char *name;
    union won_dolar price;
    _Bool w_d;
}gift;

int main(){
    const gift a[6]={
        [0].name = "PMP",
        [0].w_d = WON,
        [0].price.won = 600000,
        [1].name = "MP3",
        [1].w_d = WON,
        [1].price.won = 153000,
        [2].name = "Smartphone",
        [2].w_d = DOLLAR,
        [2].price.dollar = 520.40,
        [3].name = "TV",
        [3].w_d = DOLLAR,
        [3].price.dollar = 430.20,
        [4].name = "Navigator",
        [4].w_d = WON,
        [4].price.won = 350000,
        [5].name = "Laptop",
        [5].w_d = DOLLAR,
        [5].price.dollar = 1950.00
    };
    

}