#include <stdio.h>


int main()
{
    struct book
    {
        char title[20];
        char author[20];
        int edition;
        char isbn[14];
        char publisher[20];
        float price;
    }b1;

    printf("Enter the title of the book: ");
    gets(b1.title);


    printf("Enter the name of the author of the book: ");
    gets(b1.author);

    printf("Enter edition of the book: ");
    scanf("%d",&b1.edition);
    fflush(stdin);

    printf("Enter the isbn number of the book: ");
    gets(b1.isbn);


    printf("Enter the name of the publisher of the book: ");
    gets(b1.publisher);


    printf("Enter the price of the book: ");
    scanf("%f",&b1.price);
    fflush(stdin);

    printf("\n%s\n%s\n%d\n%s\n%s\n%f\n",b1.title,b1.author,b1.edition,b1.isbn,b1.publisher,b1.price);

}
