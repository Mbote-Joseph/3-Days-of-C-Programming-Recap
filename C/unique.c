#include <stdio.h>
#include <stdlib.h>

void pattern(int height, int length);
// void triangle(int height, int length);

int main(void){
    int height, length;
    printf("Enter the height :");
    scanf("%d",&height);
    printf("Enter the length :");
    scanf("%d",&length);

    pattern(height, length);
}

void pattern(int height, int length){
    for(int i=0; i<length; i++){
        for(int j=0; j<height; j++){
            if(i==0 || i==length-1 || j==0 || j==height-1){
                printf(" * ");
            }
            else{
                // pattern(height, length);
                for(int k=0; k<=1; ++k ){
                    for(int k=0; k<=1; ++k ){
                    printf(" ");
                }
                }
                
            }
            
        }
        printf("\n");
    }
}

// void triangle(int height, int length){
//     for(int i=height; i<=height; i-- ){
//         for(int k=length; k<=length; k-- ){
//             printf(" * ");
//         }
//     }
// }