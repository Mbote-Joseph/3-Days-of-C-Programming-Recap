#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a=50;
    int *ptr = &a;
    printf("%d\n", &ptr);
    printf("%d\n", *ptr);
    *ptr = 100;
    printf("%d\n", *ptr);

   
}