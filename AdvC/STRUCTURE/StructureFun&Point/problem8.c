#include <stdio.h>
struct circle
{
    int radius;
};
void raduis_parameter(struct circle var)
{

    printf("Area of circle is %f\n",3.14 * var.radius * var.radius);
    printf("Area of circle is %f\n", 2 *3.14 * var.radius);
    
}
int main ()
{
    struct circle c ;
    printf("Enter the radius : ");
    scanf("%d",&c.radius);
    raduis_parameter(c);
    return 0;
}