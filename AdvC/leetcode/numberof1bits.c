#include <stdio.h>

int main ()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    
     
    int countOfOne = 0;
    for(int i=0;i<32;i++)
    {
        unsigned int res = num & (1u << i);
        if(res)
         countOfOne++;
         
         
    }
    
    
    printf("Number of ONES is : %d\n",countOfOne);
    return 0;
    
    
 }
 
  
 
    
