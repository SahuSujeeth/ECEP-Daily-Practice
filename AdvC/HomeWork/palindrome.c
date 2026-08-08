#include <stdio.h>

int main (){
    int number;
    printf("Enter the nnumber:");
    scanf("%d",&number);
    int new = number;
    int reverse = 0;
    int remainder;


    while(number>0)
    {
        remainder = number %  10;
        reverse = (reverse * 10) + remainder;
        number = number / 10; 
    }
    if(new == reverse)
    {
        printf("The number is palindrome");  
    }
    else{
        
        printf("The number is not palindrome");  
    }
    
    
    
    return 0;
}