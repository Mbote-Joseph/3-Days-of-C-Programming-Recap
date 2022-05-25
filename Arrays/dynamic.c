#include <stdio.h>
#include <stdlib.h>

void average(int *scores, int i);
void array(int i);

int main(void){
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    // Calling the array function
    array(i);
 

}

// Declaring the array of size i
void array(int i){
    int scores[i];
    for (int j = 0; j < i; j++)
    {
        printf("Enter grade %d: ", j+1);
        scanf("%d", &scores[j]);
    }
    average(scores, i);
}


// Find the average of the array
void average(int *scores, int i){
    int sum=0;

    for (int j = 0; j < i; j++)
    {
        sum += scores[j];
    }
    printf("The average of your grades is: %d\n", sum/i);
}