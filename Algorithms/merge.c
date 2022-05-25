#include <stdio.h>
#include <stdlib.h>

void print_original(int *list,int n);
void merge(int *list, int n);

int main(void){
    int n;
    printf("Enter the number of items you want in the array: ");
    scanf("%d", &n);
    int list[n];
    for(int i = 0; i < n; i++){
        printf("Enter a number: ");
        scanf("%d", &list[i]);
    }
    printf("The original array is: \n");
    print_original(list,n);
    printf("\n");
    merge(list,n);
}

void print_original(int *list,int n){
    printf("====================================\n");
    for(int i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    printf("\n");
}

void merge(int *list, int n){
    int temp[n];
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n && j < n){
        if(list[i] < list[j]){
            temp[k] = list[i];
            i++;
        }
        else{
            temp[k] = list[j];
            j++;
        }
        k++;
    }
    while(i < n){
        temp[k] = list[i];
        i++;
        k++;
    }
    while(j < n){
        temp[k] = list[j];
        j++;
        k++;
    }
    for(int i = 0; i < n; i++){
        list[i] = temp[i];
    }

    print_original(list,n);
}