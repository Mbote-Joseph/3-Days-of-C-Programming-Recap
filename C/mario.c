#include <stdio.h>
#include <stdlib.h>

void mario(int width, int height);

int main(void){
    int width, height;
    printf("Enter the width Mario: ");
    scanf("%d", &width);
    printf("Enter the height Mario: ");
    scanf("%d", &height);

    mario(width, height);

    
}

void mario(int width, int height){
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            if(i==0 || i==height-1 || j==0 || j==width-1){
                printf(" * ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}