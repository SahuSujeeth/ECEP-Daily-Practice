#include <stdio.h>

int main ()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int marks[size];
    int sum = 0;
    for(int i=1;i<size;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(int i=0; i<size; i++)
    {
       // sum = sum + marks[i];
       printf("sum of the array: %d\n",marks[i]);
    }

    return 0;
}
