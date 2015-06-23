//This code also depicts the usage of structures.

#include<stdio.h>
#include<string.h>

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(void){
    struct Books book1;
    //Adding specifications to book1.

    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Pranit Bauva");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    //Printing the info of book1.

    printf("book1\'s title : %s\n", book1.title);
    printf("book1\'s author : %s\n", book1.author);
    printf("book1\'s subject : %s\n", book1.subject);
    printf("book1\'s book_id : %d\n", book1.book_id);
}
