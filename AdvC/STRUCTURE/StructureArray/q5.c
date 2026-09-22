#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
void display_employees(struct employee s[],int size);
int main()
{
    int size=4;
    // printf("enter the size: ");
    // scanf("%d",&size);
    struct employee s[4]={{123,"dayakar",45000},{124,"rajasekhar",49000},{125,"sahusujeeth",57000},{126,"harshavardhan",250000}};
    display_employees(s,size);
    return 0;
}
void display_employees(struct employee s[],int size)
{
    printf("\n------------------------------------------------------\n");
    printf("| %-10s | %-20s | %-10s |\n","employee_id","employee_name","employee_salary");
    printf("-------------------------------------------------------\n");
    for(int i=0;i<size;i++)
    {
        printf("| %-10d | %-20s | %-15d |\n",s[i].id,s[i].name,s[i].salary);
    }
    printf("------------------------------------------------------\n");
}