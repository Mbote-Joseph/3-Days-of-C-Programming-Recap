#include <stdio.h>
#include <stdlib.h>

int main(void){
    char answer;
    printf("Do you agree? (y/n)\n");
    scanf("%c", &answer);
    if(answer=='y' || answer=='Y'){
        printf("You agreed\n");
    }
    else if(answer=='n' || answer=='N'){
        printf("You disagreed\n");
    }
    else{
        printf("You didn't enter a valid answer\n");
    }
}