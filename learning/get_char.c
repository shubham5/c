#include <stdio.h>

int main(){
    int c;
    printf("Enter character : ");
    while((c = getchar() ) != EOF)
        putchar(c);
    printf("%d", c);
    return 0;
}
