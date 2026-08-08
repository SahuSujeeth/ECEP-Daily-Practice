// Write a program to display the internet usage level based on data consumed.
#include <stdio.h>

int main (){
    float data_used;
    printf("Enter the data useage in GB:");
    scanf("%f",&data_used);
    if(data_used <= 2)
    {
        printf("Low level user!!\n");
    }
    else if(data_used <= 4)
    {
        printf("Moderate level user!!\n");
    }
    else
    {
        printf("High level user!!\n");
    }

    
    
    

    return 0;
}