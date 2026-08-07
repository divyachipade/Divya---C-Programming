#include<stdio.h>

typedef struct Book
{
    int id;
    char bname[30];
    char author[30];
    float price;
}Book;

int main()
{
    Book b1;

    printf("Enter Book ID: ");
    scanf("%d",&b1.id);

    printf("Enter Book Name: ");
    scanf("%s",b1.bname);

    printf("Enter Author Name: ");
    scanf("%s",b1.author);

    printf("Enter Book Price: ");
    scanf("%f",&b1.price);

    printf("\n----- Book Details -----\n");

    printf("Book ID     : %d\n",b1.id);
    printf("Book Name   : %s\n",b1.bname);
    printf("Author Name : %s\n",b1.author);
    printf("Book Price  : %.2f\n",b1.price);

    return 0;
}