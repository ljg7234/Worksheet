#include <stdio.h> 

typedef struct {
    char name[10];
    unsigned ID : 17;
    unsigned age : 7;
    unsigned : 8;
    unsigned salary : 27;

}list;

int main(){
    list a[10] = { {.name = "tom"}, {.name = "eric"}, {.name = "jane"},{.name="mary"},{.name="kim"},{.name="lee"},{.name="Test_name"}};
    a[0].ID = 10333;
    a[1].ID = 10333;
    a[2].ID = 40234;
    a[3].ID = 30022;
    a[4].ID = 90032;
    a[5].ID = 90038;
    a[6].ID = 99999;
    a[0].age = 21;
    a[1].age = 23;
    a[2].age = 26;
    a[3].age = 46;
    a[4].age = 25;
    a[5].age = 24;
    a[6].age = 65;
    a[0].salary = 24000000;
    a[1].salary = 28000000;
    a[2].salary = 40000000;
    a[3].salary = 65000000;
    a[4].salary = 38000000;
    a[5].salary = 30000000;
    a[6].salary = 100000000;



}