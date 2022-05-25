#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char * name;
    int age;
} peoples;

int main(void){
    peoples people[3];

    people[0].age = 27;
    people[0].name = "John";
    people[1].age = 25;
    people[1].name = "Mary";
    people[2].age = 30;
    people[2].name = "Peter";
    

    for(int i = 0; i < 3; i++){
        printf("%s is %d years old.\n", people[i].name, people[i].age);
    }


}