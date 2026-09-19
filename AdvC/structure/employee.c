#include <stdio.h>
struct employee
{
    char name[20];
    int id;
    int salary;
};
int main ()
{
    struct employee s1;
    printf("Enter the name of the employee: ");    
    scanf("%s",s1.name);
    printf("Enter the id of the employee: ");
    scanf("%d",&s1.id);
    printf("Enter the salary of the employee:");
    scanf("%d",&s1.salary);
    printf("The name of the student is: %s\n",s1.name);
    printf("The marks of the student is : %d\n",s1.id);
    printf("The rollnumber of the student is : %d\n",s1.salary);
    return 0;
}