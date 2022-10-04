#include <stdio.h>
#define WON 0
#define DOLLAR 1
struct info{
union wondollar{
    int won;
    float dollar;
};

char *name; // 이름
_Bool w_d; // 평점 평균
union wondollar price;
};



int main(){
    int i,j,d;
    struct info gift[6];
    gift[0].name = "PMP";
    gift[0].price.won = 600000;
    gift[0].w_d = WON;
    gift[1].name = "MP3";
    gift[1].price.won = 153000;
    gift[1].w_d = WON;
    gift[2].name = "SmartPhone";
    gift[2].price.dollar = 520.40;
    gift[2].w_d = DOLLAR;
    gift[3].name = "TV";
    gift[3].price.dollar = 430.20;
    gift[3].w_d = DOLLAR;
    gift[4].name = "Navigator";
    gift[4].price.won = 350000;
    gift[4].w_d = WON;
    gift[5].name = "Laptop";
    gift[5].price.dollar = 1950;
    gift[5].w_d = DOLLAR;

    printf("보유금액과 환율을 입력하세요\n");
    printf("보유금액 :");
    scanf("%d",&i);
    printf("환율 :");
    scanf("%d",&j);
    printf("구매 가능한 제품은 다음과 같습니다.\n");
    for (int v=0; v < 6; v++){
        if (gift[v].w_d){
            if (i / j >= gift[v].price.dollar){
                printf("%s %.f원\n",gift[v].name,gift[v].price.dollar * 1200);
            }
        }
        else {
            if (i >= gift[v].price.won){
                printf("%s %d원\n",gift[v].name,gift[v].price.won);
            }
        }
    }

    
}