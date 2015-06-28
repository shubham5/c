#include<stdio.h>
#define MAX 1000

int get_line(char s[], int lim);

void reverse(char a[], char b[], int len){
    int i = 0;
    int j = len - 1;
    while(i < len && b[i] != '\0')
        a[j--] = b[i++];
    a[j] = b[i];
}

int main(){
    char line[MAX];
    char new_line[MAX];
    int length;

    printf("Enter a line : ");
    length = get_line(line, MAX);
    reverse(new_line, line, length);
    printf("\nThe reversed line is : %s\n", new_line);
}

int get_line(char line[], int lim){
    int i = 0;
    int c;

    while((c = getchar()) != EOF && c != '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}
