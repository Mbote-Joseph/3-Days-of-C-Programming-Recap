#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void){
    int a, b;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Original order :\n");
    printf("%d %d\n", a, b);
    
    swap(a, b);
    
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    printf("Swapped values: \n");
    printf("%d %d\n", a, b);
}