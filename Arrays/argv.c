#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if( argc==2 ){
        printf("Hello, %s\n", argv[1]);
    }
    else if( argc==3 ){
        printf("Hello, %s %s\n", argv[1], argv[2]);
    }
    
    else{
        printf("Hello, World\n");
    }
 
 
}