//This code gives a demonstration of the
//static Storage class.

//The static storage class instructs the compiler
//to keep a local variable in existence during the
//life time of the program instead of creating and
//destroying it each time it comes into and goes 
//out of scope.
//static storage class causes only one copy of that
//member to be shared by everyone in that program.

#include<stdio.h>

static int count = 5;    //This is a global static variable.

int main(void){
    while(count--){
        func();
    }
    return 0;
}

void func(void){
    static int i = 5;    //This is a local static variable.
    i++;

    printf("The value of \'i\' is : %d\n", i);
    printf("The value of \'count\' is : %d\n\n", count);
}
