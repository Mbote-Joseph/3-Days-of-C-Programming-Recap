#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *model;
    int year;
} Car;

int main(void){
    Car *myCar = (Car *)malloc(sizeof(Car));
    myCar->model = "Ford";
    myCar->year = 2015;

    free(myCar);
    
}