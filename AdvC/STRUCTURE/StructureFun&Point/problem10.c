#include <stdio.h>
#include<math.h>
struct distance_btw_twopoints
{
    int x;
    int y;
    int x1;
    int y1;
};
void distance(struct distance_btw_twopoints var)
{
    int distance_two = sqrt((var.x1 - var.x) * (var.x1 - var) + (var.y1 - var.y) * (var.y1 - var.y));
    printf("Distance between two points is %d\n",distance_two);
    
}
int main ()
{
    struct distance_btw_twopoints s;
    printf("Enter the x:\n");
    scanf("%d",&s.x);
    printf("Enter the y:\n");
    scanf("%d",&s.y);
    printf("Enter the x1:\n");
    scanf("%d",&s.x1);
    printf("Enter the y1:\n");
    scanf("%d",&s.y1);
    distance(s);
    
    
    
    return 0;
}