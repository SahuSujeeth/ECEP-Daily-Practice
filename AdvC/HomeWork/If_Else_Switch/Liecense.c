// Write a C program to determine whether a person is eligible to receive a driving license. Display an appropriate message based on the given details.
#include <stdio.h>
int main() 
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    
    if (age >= 18) 
    {
        int driving_Skill; // driving skill out of 10, 6 or greater is passing
        printf("Enter your driving skill in between (1-10): ");
        scanf("%d", &driving_Skill);
        if (driving_Skill >= 6) 
        {
            printf("Great! You are eligible for a driving license\n");
        } 
        else
        {
            printf("You need to practice well for to get skill score more \n");
        }
    } 
    else 
    {
        printf("You must be at least 18 years old to apply.\n");
    }

    return 0;
}
