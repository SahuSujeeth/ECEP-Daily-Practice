#include <stdio.h>

int main ()
{
    //we have to intialise first the size of the array of that
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int marks[size];
    printf("the size of the array %lu \n",sizeof(marks));
    

    printf("enter the marks:\n");
    for(int i=0 ; i<size; i++)
    {
        scanf("%d",&marks[i]);
    }
    // printf("The marks are these\n");
    // for(int i=0;i< size;i++)
    // {
        printf("%d\n",marks[i]);  
    // }
    return 0;
}