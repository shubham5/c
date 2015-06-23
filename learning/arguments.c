/* Demonstration of arguments in C.*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;
    printf("The number of arguments to the C program are : %d\n", argc);
    for(i = 0; i < argc; i++){
        printf("argv[%d] : %s\n", i, argv[i]);
    }
}
