// a programme to define a book structure written by lonely saam 
//I should declare the variables and initialize the data
//reg no:CT101/G/23880/24


#include <stdio.h>
#include <string.h>

struct book{
    char title[30];
    char author[30];
    int publicationYear;
    char ISBN[13];
    float price;
}book1;

int main(){

    strcpy(book1.title,"introduction to c programming");
    printf("Title: %s\n",book1.title);
    strcpy(book1.author,"John smith");
    printf("Author: %s\n",book1.author);
    
    book1.publicationYear=2022;
    printf("Publication Year: %d\n",book1.publicationYear);
    
    strcpy(book1.ISBN,"9780131103627");
    printf("ISBN:%s\n",book1.ISBN);

    book1.price=49.99;
    printf("Book price is: %2.f\n",book1.price);


    return 0;
}