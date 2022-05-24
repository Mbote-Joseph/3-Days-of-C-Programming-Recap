#include <stdio.h>
#include <stdlib.h>

void check_parity(int number);

int main(void){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // number%2==0 ? printf("%i is an even number\n", number) : printf("%i is an odd number\n", number);

   check_parity(number);
    // if(number%2==0){
    //     printf("%i is an even number.\n", number);
    // }
    // else{
    //     printf("%i is an odd number\n", number);
    // }
}

void check_parity(int number){
    number%2==0 ? printf("%i is an even number\n", number) : printf("%i is an odd number\n", number);
}