#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks_of_maths;
    int marks_of_science;
    int marks_of_computer;
};
void calculateResults(struct student s1[], int size)
 {
    printf("--------------------------------------------------------------------------------------------");
    printf("\n| %-10s | %-10s | %-10s | %-10s | %-10s | %-10s | %-10s |\n","Name", "Roll No.", "Maths", "Science", "Computer", "Total", "Average");
    printf("--------------------------------------------------------------------------------------------\n");
    
    
    
    for(int i=0;i<size;i++)
    {
        int totalMarks = s1[i].marks_of_maths + s1[i].marks_of_science + s1[i].marks_of_computer;
        int Average = totalMarks / 3;
        printf("| %-10s | %-10d | %-10d | %-10d | %-10d | %-10d | %-10d |\n",s1[i].name,s1[i].roll_no,s1[i].marks_of_maths, s1[i].marks_of_science, s1[i].marks_of_computer, totalMarks, Average);
        
    }
    printf("--------------------------------------------------------------------------------------------\n");

}
int main ()
{
    int size = 5;
    struct student s1[5] = {{"Daya",1,70,60,80}, {"Raj",2,60,70,70}, {"Harsha",3,50,60,70}, {"Ysuf",4,70,60,90}, {"Sahu",5,70,70,80}};
    
    calculateResults(s1,size);
     printf("%zu\n",sizeof(s1));
    return 0;
}