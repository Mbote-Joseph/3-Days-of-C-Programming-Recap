#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

void pascal(int height);

int main(void){
    int a, height;
    height = get_int("Enter the height of the triangle: ");

    pascal(height);

}

void pascal(int height){
    if(height == 0){
        return;
    }
    else{
        pascal(height-1);
        for(int i = 0; i < height; i++){
            printf("%d ", i); 
        }
        printf("\n");
    }
}