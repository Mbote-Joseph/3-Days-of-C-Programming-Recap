#include <stdio.h>
#include <stdlib.h>

int main(void){
    char * name;
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);


/* prints out 'John Smith is 27 years old.' */
    printf("%s is %d years old.\n", name, age);
}