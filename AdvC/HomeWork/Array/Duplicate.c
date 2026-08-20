#include<stdio.h>
int main()
{
    int size1;
    int size2;
    printf("Enter the size1:");
    scanf("%d",&size1);
    printf("Enter the size2:");
    scanf("%d",&size2);
    
    int arr1[size1];
    printf("Enter elements for arr1:");
    for(int i=0;i<size1;i++)
    {
    scanf("%d",&arr1[i]);
        
    }
    
    printf("Enter elements for arr2:");
    int arr2[size2];
    for(int i=0;i<size2;i++)
    {
    scanf("%d",&arr2[i]);
    }
    
    
    
    int temp;
    //SORTING OF 1ST ARRAY
    for(int i=0;i<size1-1;i++)
    {
        for(int j=0;j<size1-i-1;j++)
        {
            if(arr1[j] > arr1[j+1])
            {
            temp = arr1[j];
            arr1[j] = arr1[j+1];
            arr1[j+1] = temp;
            }
            
        }
    }
    
    //SORTING OF 2ND ARRAY
    for(int i=0;i<size2-1;i++)
    {
        for(int j=0;j<size2-i-1;j++)
        {
            if(arr2[j] > arr2[j+1])
            {
            temp = arr2[j];
            arr2[j] = arr2[j+1];
            arr2[j+1] = temp;
            }
        }  
    }
    
    if(size1 % 2 == 0)
    {
        if(size2 % 2 ==0)
        {
            float median1;
            int mid = size1/2;
            median1 = (float)(arr1[mid] + arr1[mid-1]) / 2;
            printf(" Median of array1:%.1f\n",median1);
            float median2;
            int mid2 = size2/2;
            median2 = (float)(arr2[mid2] + arr2[mid2-1]) / 2;
            printf(" Median of array2:%.1f",median2);
        }
        else
        {
            int median1;
            int mid = size1/2;
            median1 = arr1[mid];
            printf(" Median of array1:%d\n",median1);
            int median2;
            int mid2 = size2/2;
            median2 = arr2[mid2];
            printf(" Median of array1:%d\n",median2);

        }
    }
    else
    {
      if(size2 % 2 == 0)
      {
        int median1;
        int mid = size1/2;
        median1 = arr1[mid];
        printf(" Median of array1:%d\n",median1);
        float median2;
        int mid2 = size2/2;
        median1 = (float)(arr2[mid2] + arr2[mid2-1]) / 2;
        printf(" Median of array2:%.1f",median2);
      }
      else
      {
            int median1;
            int mid = size1/2;
            median1 = arr1[mid];
            printf(" Median of array1:%d\n",median1);
            int median2;
            int mid2 = size2/2;
            median2 = arr2[mid2];
            printf(" Median of array1:%d\n",median2);
      }
    }

    
    

    return 0;    
}