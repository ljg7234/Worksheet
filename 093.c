#include <stdio.h>
#define WON 0
#define DOLLAR 1

union won_dollar{
    int won;
    float dollar;
};

struct sort{
    char *name;
    _Bool w_d;
    union won_dollar price;
};

int main(){
    int i,j;
    struct sort item[6]= {
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
    printf("보유 금액 입력");
    scanf("%d",&i);
    printf("환율 ");
    scanf("%d",&j);
    for (int a = 0; a < 6; a++){
        if (item[a].w_d){
            if (item[a].price.dollar < i / j){
                printf("%s %f\n",item[a].name,item[a].price.dollar);
            }
        }
        else {
            if (item[a].price.won < i){
                printf("%s %d\n",item[a].name,item[a].price.won);
            }
        }
    }
}