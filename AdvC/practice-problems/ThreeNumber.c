#include <stdio.h>
void largestandsmallest(int a, int b, int c)
{
  if(a>b)
  {
    if(b>c)
    {

        printf("%d is the largest\n",a);  
        printf("%d is the smallest\n",c);  
    }
    else
    {
        printf("%d is the largest\n",a);  
        printf("%d is the smallest\n",b); 
    }
  }
  else
  {
    if(c>b)
    {
        printf("%d is the largest\n",c);
        printf("%d is the smallest\n",a);
    }
    else
    {
        printf("%d is the largest\n",b);
        printf("%d is the smallest\n",c);
    }
  }
}
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    largestandsmallest(a,b,c);
    
    return 0;
}