#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list[4];
    int *tmp = (int *)malloc(sizeof(int));
    int *tmp= realloc(list,10* sizeof(int));


    free(tmp);
}