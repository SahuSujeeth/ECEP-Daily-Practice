#include<stdio.h>
int main()
{
 int i;
 int array[5] = {1, 2, 3, 4, 5};
 for(i = -1; i < sizeof(array) / sizeof(int) - 1; i++)
 printf("%d ", array[i + 1]);
return 0;
}