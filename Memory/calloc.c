#include <stdio.h>
#include <stdlib.h>

int main(void){
   
    int i;
    printf("Enter size of memory: ");
    scanf("%d", &i);
    
    int *ptr2= calloc(1, sizeof(int)*i);

    free(ptr2);
    
}