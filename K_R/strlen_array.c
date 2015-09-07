#include<stdio.h>
#define MAXLEN 1000

/* strlen : return the length of the string.*/
int strlen_demo(char s[], int len){
    int n;
    for(n = 0; n < len; n++)
        if(s[n] == '\0')
            return (n);

    return -1;
}

int main(){
    char a[MAXLEN];
    printf("Enter a word : ");
    scanf("%s", a);
    printf("Length of the word is : %d\n", strlen_demo(a, MAXLEN));

    return 0;
}
