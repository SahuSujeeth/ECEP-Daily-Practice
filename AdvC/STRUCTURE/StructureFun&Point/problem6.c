#include <stdio.h>
struct Book 
{
    char title[10];
    char author[10];
    int price;
};
void displayBook(struct Book b )
{
    printf("The title of the book: %s\n",b.title);
    printf("The author of the book: %s\n",b.author);
    printf("The price of the book: %d\n",b.price);
}
int main ()
{
    struct Book b;
    printf("Enter the title :\n");
    scanf("%s",b.title);
    printf("name of author:\n");
    scanf("%s",b.author);
    printf("Enter the price:\n");
    scanf("%d",&b.price);
    displayBook(b);
    return 0;
}