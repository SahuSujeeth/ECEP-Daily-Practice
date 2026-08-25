#include <stdio.h>

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[2];
    float *ptr2 = ptr1 + 2;

    printf("%f ", *ptr2);
    printf("%d", ptr2 - ptr1);

   return 0;
}