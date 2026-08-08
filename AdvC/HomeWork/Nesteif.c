#include <stdio.h>

int main ()
{
    int Cgpa;
    printf("Enter Your CGPA:");
    scanf("%d",&Cgpa);
    int Aptitude;
    printf("Enter Your Aptitude result:");
    //if aptitude pass then give aptitude as 1 or else 0
    scanf("%d",&Aptitude);

    if(Cgpa >= 7)
    {
        if(Aptitude == 1)
        {
            printf("your are selected for the next round\n");
        }
        else
        {
            printf("Your not selected for this company try for the next company\n");
            
        }
    }
    else
    {
        printf("Your are eligible for placement,U need to focus on study\n");
        
    }
    
    
    return 0;
}