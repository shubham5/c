#include<stdio.h>

/* Program to count lines in getchar() input.*/

int main(){
    int nl = 0;
    int c;

    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
    }
printf("The number of lines are : %d\n", nl);
    return 0;
}
