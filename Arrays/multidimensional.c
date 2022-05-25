#include <stdio.h>
#include <stdlib.h>

// void full_name(char *name);

int main(void){
    char name[20][20]={"John", "Mary", "Peter", "Sally", "John", "Mary", "Peter", "Sally", "John", "Mary", "Peter", "Sally", "John", "Mary", "Peter", "Sally", "John", "Mary", "Peter", "Sally"};
  

    printf("%c%c%c%c\n", name[0][0], name[0][1], name[0][2], name[0][3]);
    printf("%c%c%c%c\n", name[1][0], name[1][1], name[1][2], name[1][3]);
    printf("%c%c%c%c\n", name[2][0], name[2][1], name[2][2], name[2][3]);

   
}

// void full_name(char *name){
//     printf("%s\n", name[0]);
// }