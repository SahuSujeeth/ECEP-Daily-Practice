#include <stdio.h>
struct product 
{
    char product_name[20];
    int product_id;
    int price;
};
void display_products(struct product items[],int size)
{
    printf("\n-----------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s |\n","product_id", "product_name", "product_price");
    printf("------------------------------------------------------\n");
    for(int i=0;i<size;i++)
    {
        printf("| %-10d | %-20s | %-13d |\n",items[i].product_id,items[i].product_name,items[i].price);
        
    }
    printf("-----------------------------------------------------\n");
    

}
int main ()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    struct product items[size];
    // for(int i=0;i<size;i++)
    // {
    //     printf("Enter the product_name %d: ",i+1);
    //     scanf("%s",items[i].product_name);
    //     printf("Enter the product_id %d: ",i+1);
    //     scanf("%d",&items[i].product_id);
    //     printf("Enter the product_price %d: ",i+1);
    //     scanf("%d",&items[i].price);  
    // }
    // display_products(items,size);
    printf("%zu\n",sizeof(items));
    
    return 0;
}