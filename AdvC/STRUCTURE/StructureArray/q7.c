#include <stdio.h>
struct product
{
    int product_id;
    char product_name[10];
    int price;
    int quantity;
};
void display_details(struct product p[], int size)
{
    printf("-------------------------------------------------------\n");
    printf("| %-10s | %-10s | %-10s | %-10s |\n","Product Id", "Product Name", "Price", "Quantity");
    printf("-------------------------------------------------------\n");
    for(int i=0;i<size;i++)
    {
        printf("| %-10d  | %-10s | %-10d | %-10d |\n",p[i].product_id, p[i].product_name, p[i].price, p[i].quantity);
        
    }
    printf("-------------------------------------------------------\n");

    
    
}
int main ()
{
    int size = 5;
    struct product p[5] = {{101,"Pen",20,10},{102,"Book",50,5},{103,"Bag",800,3},{104,"Bottle",150,8},{105,"Pencil",10,20}};
    display_details(p,size);
    return 0;
}