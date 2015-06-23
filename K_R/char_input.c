#include<stdio.h>

/*This program prints the character input but using getchar()
 * and putchar(). */

int main(){
    int c;
    while((c=getchar()) != EOF){
        putchar(c);
        printf("%d", c);
    }
    return 0;
}
