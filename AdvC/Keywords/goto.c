// #include <stdio.h>

// int main() {
//     int n = 0;  

//     // If the number is zero, jump to
//   	// jump_here label
//     if (n == 0)
//         goto jump_here;

//     // This will be skipped
//     printf("You entered: %d\n", n);

// jump_here:
//     printf("Exiting the program.\n");
//     return 0;
// }
#include <stdio.h>
int add(int n)
{
    return n+1;
}
int main ()
{
    int result = add(10);
    printf("return value is %d",result);
    return 0;
}