#include<stdio.h>

//This program demonstrates the use of
//Escape Sequences.

int main(void){
    printf("Backslash : \\ \n");
    printf("Single Quote : \' \n");
    printf("Double Quotes : \" \n");
    printf("Question Mark : \? \n");
    printf("Audible Bell : \a \n");
    printf("Backspace : A\b \n");
    //In this the A will not appear because
    //backspace removes a charater.
    printf("Formfeed : \f \n");
    printf("New Line : \n \n");
    printf("Carriage return : \r \n");
    //This will not show any output because
    //all the things that were written to the
    //standard output are erased by this.

    printf("Horizontal Tab : \t \n");
    printf("Vertical Tab : \v \n");
    return 0;
}
