#include<stdio.h>

#define IN 0
#define OUT 1

/*Program to count the number of words in getchar() input.*/

int main(){
    int c;
    int nw, state;
    nw = 0;
    state = OUT;

    while((c = getchar()) != EOF){
        if((c == '\n') || (c == '\t') || (c == ' '))
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("\nThe number of words are : %d\n", nw);
}
