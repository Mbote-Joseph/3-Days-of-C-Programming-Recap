#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a;
    printf("Enter size of memory: ");

    int *ptr = malloc(sizeof(int)*a);
    scanf("%d", ptr);
    printf("%d\n", *ptr);
    free(ptr);

}