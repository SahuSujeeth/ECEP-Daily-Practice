#include<stdio.h>
struct student{
    int roll_no;
    char name[20];
    int marks;
};
void search_student(struct student s[],int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    struct student s[size];
    for(int i=0;i<size;i++)
    {
        printf("enter roll_number%d:",i+1);
        scanf("%d",&s[i].roll_no);
        printf("enter student_name%d:",i+1);
        scanf("%s",s[i].name);
        printf("enter the student_marks%d:",i+1);
        scanf("%d",&s[i].marks);
    }
    search_student(s,size);
    return 0;

}
void search_student(struct student s[],int size)
{
    int found=0;
    int search_roll_number;
    printf("enter the finding_roll_number: ");
    scanf("%d",&search_roll_number);
   for(int i=0;i<size;i++)
   {
     if(s[i].roll_no==search_roll_number)
     {
        printf("finded student roll_num = %d\n",s[i].roll_no);
        printf("finded student name = %s\n",s[i].name);
        printf("finded student marks = %d\n",s[i].marks);
        found=1;
        break;
     }

   }
   if(!found)
   {
    printf("student roll number not found\n");
   }

}