//This code demonstrates structures as arguments.

#include<stdio.h>
#include<string.h>

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book);

int main(void){
    struct Books book1;
    //Add the specifications to book1.

    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Pranit Bauva");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    printBook(book1);
    return 0;
}

void printBook(struct Books book){
    printf("The info for the book is : \n");
    printf("Title : %s\n", book.title);
    printf("Author : %s\n", book.author);
    printf("Subject : %s\n", book.subject);
    printf("Book ID : %d\n", book.book_id);
}
