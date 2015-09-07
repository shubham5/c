#include<stdio.h>
#define dprint(expr) printf(#expr " = %d\n", expr)

void swap(int *a, int *b);

int main(){
    int a, b;
    printf("Enter the value of 'a' and 'b' seperated by space : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping : \n");
    dprint(a);
    dprint(b);
    swap(&a, &b);
    printf("After swapping : \n");
    dprint(a);
    dprint(b);

    return 0;
}

void swap(int *a, int *b){
     int temp = *b;
     *b = *a;
     *a = temp;
}
