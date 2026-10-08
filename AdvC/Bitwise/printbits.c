#include <stdio.h>

int main ()
{
     int x = 10;
    //  printf("%032b\n",x);
     
    int countOfOne = 0;
    for(int i=31;i>=0;i--)
    {
        int res = x & (1 << i);
        if(res)
         printf("1 ");
         else
         printf("0 ");  
    }
    printf("\n");
    
    //printf("Number of ONES is : %d\n",countOfOne);
    return 0;
    
    
 }
 
  
 
    
