#include<stdio.h>
#define MAX 100

int str_len(char s[], int lim);

int main(){
    char name[MAX] = "Pranit";
    printf("Length of the string is : %d\n", str_len(name, MAX));
}

int str_len(char a[], int lim){
    int i = 0;
    while(a[i++] != '\0' && i < lim);
    return (i - 1);
}
