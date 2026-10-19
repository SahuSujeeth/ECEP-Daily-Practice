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
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           sum = sum + arr[i][j];
            
        }
        printf("sum of the 1d array %d\n",sum);
        sum = 0;
        
    }
   
    return 0;
}