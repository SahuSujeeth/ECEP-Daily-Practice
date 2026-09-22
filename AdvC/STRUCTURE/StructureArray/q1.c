#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks;
};
void display_details(struct student s1[], int size)
 {
    
    for(int i=0;i<size;i++)
    {
        printf("\n");
        printf("\n");
        printf("The name of the student %d: %s\n",i+1,s1[i].name);
        printf("The roll number of the student %d: %d\n",i+1,s1[i].roll_no);
        printf("The marks of the student %d: %d\n",i+1,s1[i].marks); 
    }

}
int main ()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    struct student s1[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the name %d:",i+1);
        scanf("%s",s1[i].name);
        printf("Enter the roll number %d: ",i+1);
        scanf("%d",&s1[i].roll_no);
        printf("Enter the marks %d: ",i+1);
        scanf("%d",&s1[i].marks);  
    }
    display_details(s1,size);
    return 0;
}