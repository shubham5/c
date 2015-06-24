#include<stdio.h>
#include<math.h>
#define N 10000.0
#define LOWER 0
#define UPPER M_PI

int main(){
    int i = LOWER;
    double sum = 0;
    double h;

    do{
        h = (UPPER - LOWER) / N;
        sum += (h * sin(LOWER + (h * i)));
        ++i;
    }while(i <= N);

    printf("The definite integral of sine function is : %f\n", sum);
    return 0;
}
