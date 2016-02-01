#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void q_sort(void *lineptr[], int left, int right,
        int (*comp)(void *, void *));
int numcmp(char *, char *);

int main(int argc, char **argv){
    int nlines;
    int numeric = 0;

    if(argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        q_sort((void **) lineptr, 0, nlines-1,
                (int (*)(void *, void *))(numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
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
void q_sort(void *v[], int left, int right, int (*comp)(void *, void *)){
     int i, last;
     void swap(void *v[], int i, int j);

     if(left >= right)
         return;
     swap(v, left, (left+right)/2);
     last = left;
     for(i = left+1; i <= right; i++)
         if((*comp)(v[i], v[left]) < 0)
             swap(v, ++last, i);

     swap(v, left, last);
     q_sort(v, left, last-1, comp);
     q_sort(v, last+1, right, comp);
}

/* swap : interchange v[i] and v[j] */
void swap(void *v[], int i, int j){
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

/* numcmp : compare s1 and s2 numerically */
int numcmp(char *s1, char *s2){
    double v1, v2;

    v1 = atof(s1);
    v2 = atof(s2);
    if(v1 < v2)
        return -1;
    else if(v1 > v2)
        return 1;
    else
        return 0;
}
