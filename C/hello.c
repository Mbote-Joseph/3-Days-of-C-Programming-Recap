#include <stdio.h>
#include <cs50.h>

int main(void){
    string answer=get_string("What is your name?\n");
    printf("Hello CS50 Students !, by %s\n", answer);
}