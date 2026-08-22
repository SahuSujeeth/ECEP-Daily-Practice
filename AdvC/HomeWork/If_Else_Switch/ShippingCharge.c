//C Program to calculate the shipping charge based on package weight.
#include <stdio.h>

int main ()
{
    float Weight;
    printf("Enter the weight in KG:");
    scanf("%f",&Weight);
    if(Weight <= 0.5)
    {
        printf("The Shipping charge is 80 Rupees\n");   
    }
    else if(Weight <= 1.0)
    {
        printf("The shipping charge is 120 Rupees\n");
        
    }
    else if(Weight <= 2.0)
    {
        printf("The shipping charge is 200 Rupees\n");
        
    }
    else if(Weight <= 5.0)
    {
        printf("The shipping charge is 300 Rupees\n");
    }
    else
    {
        printf("The shipping charge is 100 Rupees for Kg and total shipping charge is %.2f\n",Weight * 100);
    }
    return 0;
}