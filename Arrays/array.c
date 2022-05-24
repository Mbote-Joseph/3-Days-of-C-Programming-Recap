#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numbers[10];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    numbers[7] = 80;
    numbers[8] = 90;

    int new_numbers[10];

for (int i = 0; i < 10; i++)
{
    new_numbers[i] = numbers[i];

    printf("%d\n", new_numbers[i]);
}

    
}