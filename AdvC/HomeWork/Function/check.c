#include <stdio.h>
int display()
{
    int size = 5;
    int arr[size];
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
      
    }
    int largest = arr[0];
    for(int i=1;i<size;i++)
    {
      if(largest < arr[i])
      {
        largest = arr[i];
      }
    }
    return largest;
}
int main ()
{
   printf("%d\n",display());
   
    return 0;
}