#include<stdio.h>
#define MAX 1000

void get_line(char s[], int lim);
void delete(char a[], char b[]);

int main(){
    char line[MAX];
    char new_line[MAX];

    printf("Enter a line : ");
    get_line(line, MAX);
    delete(new_line, line);
    printf("\nThe edited line is : %s\n", new_line);
}

void get_line(char s[], int lim){
    int c;
    int i = 0;

    while((c = getchar()) != EOF && i < lim)
        s[i++] = c;
    s[i] = '\0';
}

void delete(char new_line[], char line[]){
    int i = 0;
    int j = 0;

    while(line[i] != '\0'){
        if(line[i] != '\n' && line[i] != ' ' && line[i] != '\t'){
            new_line[j] = line[i];
            j++;
        }
        i++;
    }
    new_line[i] = '\0';
}

