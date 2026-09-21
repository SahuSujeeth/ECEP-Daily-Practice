#include <stdio.h>
struct product 
{
    char product_name[100];
    int price;
    int quantity;
    int quantity_want;
};
void present_available(struct product *var)
{
    if(var->quantity_want > var-> quantity)
    {
        printf("Insuficient stock\n");
        return;
    }
    else
    {
        var->quantity = var->quantity - var->quantity_want;
    }
    printf("Product name : %s\n",var->product_name);
    printf("Product price : %d\n",var->price);
    printf("Quantity avaiable is  : %d\n",var->quantity);
    
}
int main ()
{
    struct product s;
    printf("Product name :");
    scanf("%s",s.product_name);
    printf("Product price :");
    scanf("%d",s.price);
    printf("Product quantity: ");
    scanf("%d",&s.quantity);
    printf("customer need products: ");
    scanf("%d",&s.quantity_want);
    present_available(&s);
    
    
    

    
    
    return 0;
}