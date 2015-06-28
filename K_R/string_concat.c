#include<stdio.h>
#define MAX 1000

void str_concat(char a[], char b[]);

int main(){
    char a[MAX] = "Pranit";
    char b[MAX] = "Bauva";
    str_concat(a, b);
    printf("%s\n", a);
}

void str_concat(char a[], char b[]){
    int i, j;
    i = j = 0;

    while(a[i++] != '\0');
    while((a[i++] = b[j++]) != '\0');
}
