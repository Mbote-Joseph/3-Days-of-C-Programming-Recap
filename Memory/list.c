#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void){
    FILE *file= fopen("test.txt", "a");

    char *name = get_string("What is your name?\n");
    char *age = get_string("What is your age?\n");

    fprintf(file, "%s is %s years old.\n", name, age);
    
}