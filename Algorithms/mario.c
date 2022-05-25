#include <stdio.h>
#include <stdlib.h>

void draw(int height);

int main(void){
    int height;

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    draw(height);


}

void draw(int height){
    if(height ==0){
        return;
    }
    else{
        draw(height-1);
        for(int i = 0; i < height; i++){
            printf(" * ");
        }
        printf("\n");
    }
}