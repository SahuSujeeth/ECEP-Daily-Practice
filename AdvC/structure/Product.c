#include <stdio.h>
struct product
{
   char product_name[50];
   float price;
   int quantity;

};
int main ()
{
    struct product s1;
    printf("Enter the product name: ");
    scanf("%s",product_name);
    printf("Enter the price of the product: ");
    scanf("%f",&price);
    printf("Enter the quantity of the product: ");
    scanf("%d",&quantity);
    
    printf("product is %s : ",product_name);
    printf("price of the product: %f",price);
    printf("the quantity of the product is: %d",);


    float totalAmount = s1.price * s1.product;
    printf("Total amount is : %f\n",totalAmount);
    

    
    
    
    
    
    
    return 0;
}