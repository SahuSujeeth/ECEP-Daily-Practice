 #include <stdio.h>
 void display(int arr[], int size)
 {
    printf("Array elements before squaring: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    
}
void square2square(int arr[], int size)
{
    
    printf("Array elements before squaring: ");
     for(int i=0;i<size;i++)
     {
        arr[i] = arr[i] * arr[i];
     }
     for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        
    }
    
 }

 int main ()
 {
    int size;
    printf("Enter the size:");
    scanf("%d",&size);

    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    square2square(arr,size);
    
    
    return 0;
 }