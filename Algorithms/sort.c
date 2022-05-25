#include <stdio.h>
#include <stdlib.h>

void original_array(int *list);
void print_original(int *list);
void sort_array(int *list);

int main(void){
    int list[10];

    original_array(list);
}

// Enter the elements of the array
void original_array(int *list){
    for(int i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%d", &list[i]);
    }
    printf("The original array is: \n");
    print_original(list);
    printf("\n");
    sort_array(list);
    printf("\n");

}

// Print the original array
void print_original(int *list){
    printf("====================================\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", list[i]);
    }
}

// Sort the array
void sort_array(int *list){
    int temp;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(list[i] < list[j]){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("The sorted array is: \n");
    print_original(list);
}