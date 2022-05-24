#include <stdio.h>
#include <stdlib.h>

void cough(int num);

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    cough(num);


}

void cough(int num){
    for(int i=0; i<num; i++){
        printf("cough\n");
    }
}