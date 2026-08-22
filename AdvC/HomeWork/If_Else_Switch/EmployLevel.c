// Write a program to display the employee level based on years of experience.
 #include <stdio.h>
 
 int main (){
    int experience;
    printf("Enter the Your experience:");
    scanf("%d",&experience);
    if(experience <= 2)
    {
        printf("You are an Entry Level\n");
    }
    else if(experience <= 5)
    {
        printf("You are an Mid Level\n");
    }
    else if(experience <= 10)
    {
        printf("You are an Senior Level\n");
    }
    else if(experience <= 12)
    {
        printf("You are an Mangement Level\n"); 
    }
    else
    {
        printf("You are an Execute  Level\n");
    }
    
    
    return 0;
 }