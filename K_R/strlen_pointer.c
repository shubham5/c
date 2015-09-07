#include<stdio.h>
#define MAXLEN 1000

/*strlen_demo : return the length of the string uses pointers to process the string. */
int strlen_demo(char *s){
    int n;
    while(*s++ != '\0')
        n++;

    return n;
}

int main(){
    char *c;
    printf("Enter a word : ");
    scanf("%s", c);
    printf("Length of the word is : %d\n", strlen_demo(c));

    return 0;
}
