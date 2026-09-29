#include <stdio.h>
struct Book
{
    int book_id;
    char title[15];
    int price;
};
void findExpensiveBook(struct Book b[], int size)
{
    int expensiveBook = b[0].price;
    int expensiveBook_index = 0;
    for(int i=1;i<size;i++)
    {
        if(b[i].price > expensiveBook)
        {
           expensiveBook = b[i].price;
           expensiveBook_index = i;
        }
    }
    printf("THE EXPENSIVE BOOK :\n");
    
    printf("Book Id is %d\n",b[expensiveBook_index].book_id);
    printf("Book Title is %s\n",b[expensiveBook_index].title);
    printf("Book Price is %d\n",b[expensiveBook_index].price);
    
}
int main ()
{
    int size = 5;
    struct Book b[5] = {{101,"Spirit",2000},{102,"Billa",1000},{103,"Pokiri",1500},{104,"Businessman",2200},{105,"Hello",800}};
    findExpensiveBook(b,size);
     printf("%zu\n",sizeof(b));
    
    return 0;
}