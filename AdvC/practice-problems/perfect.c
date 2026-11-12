 #include <stdio.h>
 void perfect(int number)
 {
    int sum = 0;
    if(number > 0)
    {

        for(int i = 1; i < number;i++)
        {
           if(number % i == 0)
           {
               sum = sum + i;
           }
        }
        if(sum == number)
        {
          printf("Yes, entered number is perfect number\n");
        }
        else
        {
            printf("No, entered number is not a perfect number\n");
    
        }
    }
    else
    {
       printf("Error : Invalid Input, Enter only positive number\n");
       
    }
 }
 int main ()
 {
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    perfect(number);
    
    
    
    return 0;
 }