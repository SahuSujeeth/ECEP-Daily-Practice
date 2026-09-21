#include <stdio.h>
struct calender 
{
    int day;
    int month;
    int year;
};
void display_Date(struct calender var)
{
    if((var.day > 0 && var.day <= 31 ) && (var.month > 0 && var.month <= 12) && (var.year > 0 && var.year <= 2026))
    {
        printf("%d %d %d",var.day,var.month,var.year);
    }
    else
    {
        printf("Invalid input\n");
        
    }
}
int main ()
{
    struct calender c;
    printf("Enter the date:\n");
    scanf("%d",&c.day);
    printf("Enter the month:\n");
    scanf("%d",&c.month);
    printf("Enter the year:\n");
    scanf("%d",&c.year);
    calender(c);
    
    
    return 0;
}