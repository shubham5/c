#include<stdio.h>
#define MAXLEN 1000

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
