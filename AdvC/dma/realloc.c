#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n = 5;
    int *ptr = malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation is failed\n");
        free(ptr);
        return 1;
    }
    for(int i=0; i<n; i++)
    {
        ptr[i] = i + 1;
    }
    for(int i=0; i<n; i++)
    {
       printf("%d ",ptr[i]);
       
    }
    int *temp = realloc(ptr , 10*sizeof(int));
    if(temp == NULL)
    {
        printf("Memory reallocation is fail!!\n");
        free(ptr);
        return 1;
    }
    ptr = temp;
    for(int i=5; i<10; i++)
    {
        ptr[i] = i + 1;
    }
    for(int i=5; i<10; i++)
    {
       printf("%d ",ptr[i]);
       
    }
    free(ptr);
    ptr = NULL;
    return 0;
}