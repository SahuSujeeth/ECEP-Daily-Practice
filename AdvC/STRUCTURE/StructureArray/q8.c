#include <stdio.h>
struct product
{
    int product_id;
    char product_name[10];
    int price;
};
void display_details(struct product p[], int size)
{
    printf("-----------------------------------------\n");
    printf("| %-10s | %-10s | %-10s |\n","Product Id", "Product Name", "Price");
    printf("-----------------------------------------\n");
    for(int i=0;i<size;i++)
    {
        printf("| %-10d  | %-10s | %-10d |\n",p[i].product_id, p[i].product_name, p[i].price);
        
    }
    printf("-----------------------------------------\n");
}
void updatePrice(struct product p[], int size)
{
for(int i=0;i<size;i++)
{
   p[i].price = p[i].price + (10.0/100 * p[i].price);
}
}

int main ()
{
    int size = 5;
    struct product p[5] = {{101,"Pen",20},{102,"Book",50},{103,"Bag",800},{104,"Bottle",150},{105,"Pencil",10}};
    updatePrice(p,size);
    display_details(p,size);
     printf("%zu\n",sizeof(p));
   
    return 0;
}