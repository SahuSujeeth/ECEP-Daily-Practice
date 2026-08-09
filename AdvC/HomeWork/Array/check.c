// #include <stdio.h>

// int main ()
// {
//    int arr[5] = {3,2,8,5,4};
//    int arr1[5] = {12,3,7,8,5};
//    int temp;
//    for(int i=0;i<5;i++)
//    {
//     for(int j=0;j<5-i-1;j++)
//     {
//         if(arr[j] > arr[j+1])
//         {
//          temp = arr[j];
//          arr[j]  = arr[j+1];
//          arr[j+1] = temp;
//         }
//     }
//    }
//    for(int i=0;i<5;i++)
//    {
//     for(int j=0;j<5-i-1;j++)
//     {
//         if(arr1[j] > arr1[j+1])
//         {
//          temp = arr1[j];
//          arr1[j]  = arr1[j+1];
//          arr1[j+1] = temp;
//         }
//     }
//    }
//  //median of both array.  
// if()

    
//     return 0;
// }
#include<stdio.h>
int main()
{
    int size1;
   // int size2;
    printf("Enter the size1:");
    scanf("%d",&size1);
    
    
    int arr1[size1];
    printf("Enter elements for arr1:");
    for(int i=0;i<size1;i++)
    {
    scanf("%d",&arr1[size1]);
        
    }
    int temp;
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size1;j++)
        {
            if(arr1[j] > arr1[j+1])
            {
            temp = arr1[j];
            arr1[j] = arr1[j+1];
            arr1[j+1] = temp;
            }
            
        }
    }
    for(int i=0;i<size1;i++)
    {
        printf("%d ",arr1[i]);
        
    }
    return 0;    
}