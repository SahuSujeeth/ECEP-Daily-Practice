#include <stdio.h>
struct Time
{
    int Hour;
    int min;
    int sec;
};
void dsiplayTime(struct Time t)
{
  printf("%d : %d : %d",t.Hour,t.min,t.sec);
}
int main ()
{
     struct Time t;
     printf("Enter the hour:");
     scanf("%d",&t.Hour);
     printf("Enter the min:");
     scanf("%d",&t.min);
     printf("Enter the sec:");
     scanf("%d",&t.sec);
     dsiplayTime(t);
     
    return 0;
}