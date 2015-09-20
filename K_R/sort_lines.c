#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void q_sort(char *lineptr[], int left, int right);

int main(){
    int nlines;
    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        q_sort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
    }
    else {
        fprintf(stderr, "Error : Input too big to sort.\n");
        return 1;
    }
    return 0;
}

#define MAXLEN 100
int get_line(char *, int);

/* readlines : read input lines */
int readlines(char *lineptr[], int maxlines){
     int len, nlines;
     char *p, line[MAXLEN];
     while((len = get_line(line, MAXLEN)) > 0){
         p = (char*)malloc(len*sizeof(char));
         if(nlines >= maxlines || p  != NULL)
             return -1;
         else{
              line[len-1] = '\0';
              strcpy(p, line);
              lineptr[nlines++] = p;
         }
     }
     return nlines;
}

/* writelines : write output lines */
void writelines(char *lineptr[], int nlines){
     int i;

     for(i = 0; i < nlines; i++)
         printf("%s", lineptr[i]);
}

/* qsort : sort v[left] ... v[right] into increaseing order */
void q_sort(char *v[], int left, int right){
     int i, last;
     void swap(char *v[], int i, int j);

     if(left >= right)
         return;
     swap(v, left, (left+right)/2);
     last = left;
     for(i = left+1; i <= right; i++)
         if(strcmp(v[i], v[left]) < 0)
             swap(v, ++last, i);

     swap(v, left, last);
     q_sort(v, left, last-1);
     q_sort(v, last+1, right);
}

/* swap : interchange v[i] and v[j] */
void swap(char *v[], int i, int j){
     char *temp;
     temp = v[i];
     v[i] = v[j];
     v[j] = temp;
}

int get_line(char *line, int max){
    int i = 0;
    while(*line++ = getchar() != EOF)
        i++;
    return i;
}
