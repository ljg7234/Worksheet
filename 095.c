#include <stdio.h>
#include <string.h>
struct data{
    char name[10];
    unsigned ID : 17;
    unsigned age : 7;
    unsigned salary : 27; 

};


int main(){
    struct data a[7];
    strcpy(a[0].name,"Tom");
    strcpy(a[1].name,"eric");
    strcpy(a[2].name,"jane");
    strcpy(a[3].name,"mary");
    strcpy(a[4].name,"kim");
    strcpy(a[5].name,"lee");
    strcpy(a[6].name,"Test_name");
    a[0].ID = 10333;
    a[1].ID = 10333;
    a[2].ID = 40234;
    a[3].ID = 30022;
    a[4].ID = 90038;
    a[5].ID = 90032;
    a[6].ID = 99999;
    a[0].age = 21;
    a[1].age = 23;
    a[2].age = 26;
    a[3].age = 46;
    a[4].age = 25;
    a[5].age = 24;
    a[6].age = 65;
    a[0].salary = 21;
    a[1].salary = 23;
    a[2].salary = 26;
    a[3].salary = 46;
    a[4].salary = 25;
    a[5].salary = 24;
    a[6].salary = 100000000;    
    
    for (int i = 0; i < 7; i++){
        printf("%s %d %d %d\n",a[i].name,a[i].ID,a[i].age,a[i].salary);
    }
    
    
    
}