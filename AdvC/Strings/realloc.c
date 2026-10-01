/*
realloc:
while allocate new size is greater then old size these 4 steps:
-> to find new location 
->copy old data to new locatin
->delete old address 
->return new address

How its works:
->It looks for the space to store in the continous memroy.
->If the new size is larger then old size then i will create new size with the given size.
->If the new size is lesser then old size then it will delete the remaining space.
*/
#include <stdio.h>

int main ()
{
    int *ptr = malloc(20);
    printf("%p\n",ptr);
    ptr = realloc(ptr,5);
    printf("%p\n",ptr);
    
    
    return 0;
}