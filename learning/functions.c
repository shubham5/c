//Demonstration of How to pass a variable
//to be modified in a method.
//A memory address is passed in the method.

#include <stdio.h>
#include <math.h>

void add(int no1, int no2, int *result){
    *result = no1 + no2;
}

int main(){
    int no1 = 2;
    int no2 = 3;
    int result = 0;
    add(no1, no2, &result);
    printf("Sum is : %d\n", result);
    printf("The address of the variable result is : %p\n", &result);
    return 0;
}
