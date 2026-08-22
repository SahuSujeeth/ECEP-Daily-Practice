//WA Program to calculate the BMI and display the health status.
#include <stdio.h>

int main ()
{
    float Weight, Height;
    printf("Enter the Weight in KG and Height in Meter:");
    scanf("%f %f",&Weight, &Height);
    float BMI = Weight / (Height * Height);
    if (BMI <= 20.5)
    {
        printf("Underweight\n");
    } 
    else if (BMI <= 25.0) 
    {
        printf("Normal weight\n");
    } 
    else if (BMI <= 30.0)
    {
        printf("Overweight\n");
    } 
    else
    {
        printf("Obesity\n");
    }
    
    

    return 0;
}