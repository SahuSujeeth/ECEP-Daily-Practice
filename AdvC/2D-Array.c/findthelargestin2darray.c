#include <stdio.h>

int main ()
{
    int arr[2][3];
    int sum = 0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    int largest = arr[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(arr[i][j] > largest)
            largest = arr[i][j];
            
        }
    }
    printf("Largest element of the 2d array is %d \n",largest);
    
    return 0;
}