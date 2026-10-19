#include <stdio.h>

int main ()
{
    int arr[2][3];
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
           int k= j;
           int l = 3;
           
           while(k < 3/2)
           {
            int temp = arr[k][l-k-1];
            arr[k][j] = arr[k][l-k-1];
            arr[k][l-k-1] = temp;
            k++;
            l--;

           }
            
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
            
        }
    }
    return 0;
}