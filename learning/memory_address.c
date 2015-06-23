#include<stdio.h>

void main(void){
    int a = 20;
    int b = 10;

    // &<variable-name> returns the memory 
    // of the variable.
    printf("The memory address of a is : %x\n", &a);
    printf("The memory address of b is : %x\n", &b);
}
