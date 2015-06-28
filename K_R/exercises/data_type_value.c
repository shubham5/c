#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main(){
    unsigned char i = 1;
    for(; ; i++){
        printf("i = %d\n", i);
        if(i == 0)
            return 1;
    }
}
