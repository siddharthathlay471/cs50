// Define a structure named Book with book ID (integer), title (character array), and price (float). Write a program to read and display the details of one book.
#include<stdio.h>
struct book{
    int ID;
    char title[30];
    float price;
};
int main()
{
    struct book b1;
    printf("enter the book ID: ");
    scanf("%d", &b1.ID);
    printf("enter the book title:");
    scanf("%s", b1.title);
    printf("enter the price of the book");
    scanf("%f",&b1.price);

    printf("ID - %d\n",b1.ID);
    printf("title - %s\n",b1.title);
    printf("price - %f\n",b1.price);

    return 0;
}