#include <stdio.h>
struct employee
{
    char name1[20];
    int id1;
    int salary1;
    char name2[20];
    int id2;
    int salary2;
};
void display_details(struct employee *s1)
{
    
    if(s1->salary1 > s1-> salary2)
    {
      printf("The name1 of the employee is: %s\n",s1->name1);
      printf("The id1 of the employee is : %d\n",s1->id1);
      printf("The salary1 of the employee is : %d\n",s1->salary1);
    }
    else
    {
     printf("The name1 of the employee is: %s\n",s1->name2);
     printf("The id1 of the employee is : %d\n",s1->id2);
     printf("The salary1 of the employee is : %d\n",s1->salary2);   
    }
   
    
}
int main ()
{
    struct employee s1;
    printf("Enter the name1 of the employee: ");    
    scanf("%s",s1.name1);
    printf("Enter the id1 of the employee: ");
    scanf("%d",&s1.id1);
    printf("Enter the salary1 of the employee:");
    scanf("%d",&s1.salary1);
    printf("Enter the name2 of the employee: ");    
    scanf("%s",s1.name2);
    printf("Enter the  id2 of the employee: ");
    scanf("%d",&s1.id2);
    printf("Enter the salary2 of the employee:");
    scanf("%d",&s1.salary2);
    display_details(&s1);
    return 0;
}