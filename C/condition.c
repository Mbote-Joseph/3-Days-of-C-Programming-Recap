
#include <stdio.h>
#include <stdlib.h>


int main(void){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number>=50){
        printf("%i is greater than 50\n", number);
    }
    else{
        printf("%i is less than 50\n", number);
    }
}