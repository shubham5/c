#include <stdio.h>

int main(){
    int c;                        //It can also be int. Does not matter.
    while((c=getchar())!=EOF){
        putchar(c);
    }
}
