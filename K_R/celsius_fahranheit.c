#include <stdio.h>
#define LOWER 0.0
#define UPPER 100.0
#define STEP 20.0

int main(int argc, int *argv[]){
    printf("Celsius\t Fahranheit\n");
    float i;
    for(i = LOWER; i <= UPPER; i = i + STEP){
        printf("%6.1f \t %6.1f\n", i, ((i+32.0)*9.0/5.0));
    }
    return 0;
}
