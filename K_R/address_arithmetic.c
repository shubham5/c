#define ALLOCSIZE 10000    /* Size of available space */

static char allocbuf[ALLOCSIZE];   /* storage for alloc */
static char *alloc = allocbuf;     /* next free position */

char *alloc(int n){              /* return pointer to n characters */
    if(allocbuf + ALLOCSIZE - allocp >= n){    /* it fits */
        allocp += n;
        return allocp - n;     /* old p */
    }
    else
        return 0;
}

void afree(char *p){         /* free storage pointer to by p */
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
