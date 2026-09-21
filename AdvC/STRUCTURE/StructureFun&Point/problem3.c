#include <stdio.h>
struct student
{
    int roll_no1;
    int marks1;
    int roll_no2;
    int marks2;

};
void display_details(struct student *s1)
{
    int temp = s1->marks1;
    s1->marks1 = s1->marks2;
    s1->marks2 = temp;
    
    printf("The rollno. of the student1 is: %d\n",s1->roll_no1);
    printf("The rollno. of the student2 is : %d\n",s1->roll_no2);
    printf("The marks of the student1 is : %d\n",s1->marks1);
    printf("The marks of the student2 is : %d\n",s1->marks2);
}
int main ()
{
    struct student s1;
    printf("Enter the roll number of the student2: ");    
    scanf("%d",&s1.roll_no1);
    printf("Enter the roll number of the student2: ");
    scanf("%d",&s1.roll_no2);
    printf("Enter the marks of the student1:");
    scanf("%d",&s1.marks1);
    printf("Enter the marks of the student2:");
    scanf("%d",&s1.marks2);
    
    display_details(&s1);
    return 0;
}