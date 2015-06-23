//What are Pointers?
//A pointer is a variable whole value is the address of another variable ie.
//direct address of the memory location. Like any variable or constant, you must
//delare a pointer before you can use it to store any variable address. The
//general form  of a pointer declaration is : 
//          <type> *<variable-name>;
//

#include<stdio.h>

void main(void){
    int var = 20;      //This is a variable only.
    int *ip;           //This is a pointer.

    ip = &var;
    //Now ip stores the memory address of the variable var.

    printf("Address of var variable is : %x\n", &var);

    //Address stored in pointer variable.
    printf("Address stored in ip pointer is : %x\n", ip);
    //When we just type <variable-name> of the pointer,
    //the memory address is shown.
    
    //To print the pointer's value, we have to put in *
    //before the <variable-name>.
    printf("The value of *ip pointer is  : %x\n", *ip);
    printf("The value of var is : %x\n", var);
}
