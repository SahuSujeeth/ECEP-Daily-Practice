#include<stdio.h>
struct student{
    int roll_no;
    char name[20];
    int marks;
};
void display_highest_marks(struct student s[],int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    struct student s[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the student%d roll_number: ",i+1);
        scanf("%d",&s[i].roll_no);
        printf("enter the student%d name: ",i+1);
        scanf("%s",s[i].name);
        printf("enter the student%d marks: ",i+1);
        scanf("%d",&s[i].marks);
    }
    display_highest_marks(s,size);
    return 0;
}
void display_highest_marks(struct student s[],int size)
{
    int i=0;
    int topper_index=0;
    for(i=1;i<size;i++)
    {
        if(s[i].marks>s[topper_index].marks)
        {
            topper_index=i;
        }
    }
    printf("roll_no_highest_marks :%d\n highest_marks_student_name :%s\n highest_marks_overall: %d\n",s[topper_index].roll_no,s[topper_index].name,s[topper_index].marks);
}