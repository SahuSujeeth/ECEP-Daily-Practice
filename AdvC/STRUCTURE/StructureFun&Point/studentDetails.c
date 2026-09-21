#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks;
};
int main ()
{
    struct student s1;
    printf("Enter the name of the student: ");    
    scanf("%s",s1.name);
    printf("Enter the roll number of the student: ");
    scanf("%d",&s1.roll_no);
    printf("Enter the marks of the student:");
    scanf("%d",&s1.marks);
    printf("The name of the student is: %s\n",s1.name);
    printf("The marks of the student is : %d\n",s1.marks);
    printf("The rollnumber of the student is : %d\n",s1.roll_no);
    return 0;
}