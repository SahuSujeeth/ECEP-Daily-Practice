//Write a C Program to calculate the discount and final bill amount
#include <stdio.h>
int main ()
{
    float bill_Amount;
    printf("Enter the Bill Amount:");
    scanf("%f",&bill_Amount);
    float Total_Amount, Discount;
    if( bill_Amount >= 4000)
    {
        Discount = bill_Amount * 0.30;
    }
    else if(bill_Amount >= 2000)
    {
        
        Discount = bill_Amount * 0.15;
    }
    else if(bill_Amount >= 1000)
    {
        Discount = bill_Amount * 0.05;
        
    }
    else
    { 
        Discount = 0.0;
    }
    Total_Amount = bill_Amount - Discount;
    printf("Total amount need to pay by %.2f\n",Total_Amount);
    return 0;
}