#include <stdio.h>
#include <stdlib.h>

int main(void){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    int days= age*365;
    printf("You have lived %i days\n", days);
}