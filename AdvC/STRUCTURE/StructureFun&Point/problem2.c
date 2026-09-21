#include <stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};
void display_details(struct employee *s1)
{
    
    printf("The name of the employee is: %s\n",s1->name);
    printf("The marks of the student is : %d\n",s1->id);
    if(s1->salary < 30000)
    {
        s1->salary = (s1->salary * 0.1) + s1->salary;
    }
    else
    {
        s1->salary = (s1->salary * 0.05) + s1->salary;
    }
    printf("The salary of the employee is : %f\n",s1->salary);

}
int main ()
{
    struct employee s1;
    printf("Enter the name of the employee: ");    
    scanf("%s",s1.name); 
    printf("Enter the roll number of the employee: ");
    scanf("%d",&s1.id);
    printf("Enter the marks of the employee:");
    scanf("%f",&s1.salary);
    display_details(&s1);
    return 0;
}