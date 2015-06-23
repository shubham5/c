#include<stdio.h>

/*This program counts the number of characters in getchar() input. */

int main(){
    int nc;
    while(getchar() != EOF)
        ++nc;
    printf("\nThe number of characters are  : %d\n", nc);
    return 0;
}
