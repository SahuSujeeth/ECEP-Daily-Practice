#include <stdio.h>
struct product
{
    int product_id;
    char product_name[10];
    int price;
};
void countProducts(struct product p[], int size)
{
    int largerProducts = 0;
    int smallerProducts = 0;
    for(int i=0;i<size;i++)
    {
        if(p[i].price > 500)
        {
            largerProducts++;
        }
        else
        {
            smallerProducts++; 
        }
    }
    printf("Larger products are %d which are greater than 500 price\n",largerProducts);
    printf("Smaller products are %d which are less than 500 price\n",smallerProducts);

}
int main ()
{
    int size = 6;
    struct product p[6] = {{101,"Bat",1000},{102,"Ball",200},{103,"Kit",2000},{104,"Wickets",700},{105,"Bails",300},{106,"Gloves",1200}};
    countProducts(p,size);
     printf("%zu\n",sizeof(p));
    
    return 0;
}