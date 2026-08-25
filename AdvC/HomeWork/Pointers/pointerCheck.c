// // #include<stdio.h>
// // void scan_array(int *ptr); //should be int *ptr
// // void print_array(int *ptr); //should be int *ptr
// // int main()
// // {
// //  int arr[5];
// //  scan_array(arr);
// //  print_array(arr);
// //  return 0;
// // }
// // void scan_array(int *ptr)
// // {
// //     printf("enter the array elements\n"); //ptr + i is now REAL pointer arthmatic - correct
// //     for(int i=0;i<5;i++)
// //     {
// //         scanf("%d",ptr+i);
// //     }
// // }
// // void print_array(int *ptr)
// // {
// //     printf("th elements are \n");
// //     for(int i=0;i<5;i++)
// //     printf("%d\n",*(ptr+i)); // dereferenced - printfs the value, not the address
// // }
// #include <stdio.h>

// int main ()
// {
//     int arr[5] = {10,20,30,40,50};
//     int i;
//     for(i=-1;i < sizeof(arr)/sizeof(int) - 1;i++)
// //     {
// //         printf("%d ",arr[i+1]);
        
// //     }
// //     return 0;
// // }
// #include <stdio.h>
//  int *create_array()
//     {
//         int arr[5] = {10,20,30,40,50};
//         return arr;
//     }
// int main ()
// {
//     int *ptr;
//     ptr = create_array();
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",ptr[i]);
        
//     }
//     return 0;
}