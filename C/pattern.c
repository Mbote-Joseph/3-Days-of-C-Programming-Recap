#include <stdio.h>
#include <stdlib.h>

void pattern(int num);

int main(void){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    pattern(number);
}

void pattern(int num){
    for(int i=1; i<=num; ++i){
        for(int j=0; j<=i; ++j){
            printf("*");
           
        }
        printf("\n");
    }
}