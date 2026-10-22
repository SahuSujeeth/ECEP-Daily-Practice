 #include <stdio.h>
 
 int main ()
 {
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    int *ptr1 = &arr;// Incompitable pointer type to store the address of whole array we have to use pointer to an array
   printf("%d\n",*(ptr+1));
    printf("%d\n",*(ptr1+1));
    //  printf("%p\n",ptr);
    // printf("%p\n",ptr1);
    
    return 0;
 }