#include<stdio.h>

/*Program to count white space characters in getchar() like
 * newline, space, tabs.
 */

int main(){
    int nl, ns, nt;
    nl = ns = nt = 0;
    int c;

    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
        else if(c == '\t')
            ++nt;
        else if(c == ' ')
            ++ns;
    }
    printf("\nThe number of newline characters are : %d", nl);
    printf("\nThe number of blank characters are : %d", ns);
    printf("\nThe number of tab characters are : %d\n", nt);
}
