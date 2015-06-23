//This code demonstrates the use of Unions.

#include<stdio.h>
#include<string.h>

union Data{
    int i;
    int f;
    char str[20];
};

int main(void){
    union Data data;
    printf("The size of the union is : %d\n", sizeof(data));
    //Assigning values to union.
    //A union can hold any one value at a given time.

    data.i = 10;
    printf("The value of \'data.i\' is : %d\n", data.i);
    
    data.f = 12.2;
    printf("The value of \'data.f\' is : %f\n", data.f);

    strcpy(data.str, "Pranit Bauva");
    printf("The value of \'data.str\' is : %s\n", data.str);
    return 0;
}

