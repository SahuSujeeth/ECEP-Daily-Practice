#include <stdio.h>

int main ()
{
    int arr1[2][2] = {1,2,3,4};
    int arr2[2][2] = {1,3,2,4};
    int sum = 0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum = arr1[i][j] + arr2[i][j];
            printf("%d ",sum);
        }
        
    }

    return 0;
}