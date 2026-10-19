#include <stdio.h>

int main ()
{
     int x = 15;
    //  printf("%032b\n",x);
     
    int countOfOne = 0;
    for(int i=0;i<32;i++)
    {
        int res = x & (1 << i);
        if(res)
         countOfOne++;
         
         
    }
    
    
    printf("Number of ONES is : %d\n",countOfOne);
    return 0;
    
    
 }
 
  
 
    
