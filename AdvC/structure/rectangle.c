#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int main ()
{
    struct rectangle s1;
    printf("Enter the length of the rectangle: ");    
    scanf("%d",&s1.length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&s1.breadth);

    printf("The Area of the rectangle: %d\n",s1.length * s1.breadth);
    printf("The Perimeter of the rectangle is  : %d\n",2 * (s1.length +s1.breadth));
   
    return 0;
}