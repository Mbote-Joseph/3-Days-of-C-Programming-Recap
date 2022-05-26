#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

void append_list(void);
void print_list(void);
int main(void){

    char *option=get_string("Do you want to append or print the list?\n");
    if(option[0]=='a'){
        append_list();
    }
    else if(option[0]=='p'){
        print_list();
    }
    else{
        printf("Invalid input\n");
    }
    // append_list();
    

}

// Create a csv file with the following data.
void append_list(void){
    FILE *file= fopen("data.csv", "a");
    char *name = get_string("What is your name?");
    char *age = get_string("What is your age?");
    char *class= get_string("What is your class?");
    char *project= get_string("What is your project? ");

    fprintf(file, "%s,%s,%s,%s\n", name, age, class, project);
}

// Print the data in the csv file.
void print_list(void){
    FILE *file= fopen("data.csv", "r");
    char name[20];
    char age[20];
    char class[20];
    char project[20];
    while(fscanf(file, "%s,%s,%s,%s\n", name, age, class, project) != EOF){
        printf("%s,%s,%s,%s\n", name, age, class, project);
    }
}