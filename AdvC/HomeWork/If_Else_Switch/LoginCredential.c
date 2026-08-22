// Write a C program to validate a user's login credentials and display the appropriate login status.
#include <stdio.h>

int main() 
{
    
    int stored_user_id = 7263492;
    int stored_password = 2026;

    int input_user_id;
    printf("Enter User ID: ");
    scanf("%d", &input_user_id);
    
    if (input_user_id == stored_user_id) 
    {
        int input_password;
        printf("Enter PASSWORD: ");
        scanf("%d", &input_password);
        if (input_password == stored_password) 
        {
            printf("Login Successful. Welcome to your account!!\n");
        } 
        else
        {
            printf("Login Failed: Incorrect Password!!\n");
        }
    } 
    else
    {
        printf("Login Failed: Invalid User Id!!\n");
    }

    return 0;
}
