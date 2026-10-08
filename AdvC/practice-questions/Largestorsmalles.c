#include <stdio.h>
void largestandsmallest(int a, int b)
{
  if(a>b)
  {
      
      printf("%d is the largest \n",a);
      printf("%d is the smallest\n",b);
    
  }
  else
  {
    printf("%d is the largest\n",b);
    printf("%d is the smallest\n",a);
    
  }
}
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    largestandsmallest(a,b);
    
    return 0;
}