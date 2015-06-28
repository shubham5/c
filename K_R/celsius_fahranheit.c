#include<stdio.h>
#define LOWER 0.0
#define UPPER 100.0
#define STEP 20.0

double to_fahranheit(double celsius);

int main(int argc, int *argv[]){
    printf("Celsius\t Fahranheit\n");
    float i;
    for(i = LOWER; i <= UPPER; i = i + STEP){
        printf("%6.1f \t %6.1f\n", i, to_fahranheit(i));
    }
    return 0;
}

double to_fahranheit(double celsius){
    return ((celsius * 9 / 5) + 32);
}
