#include <stdio.h>

int main (){
    int marks;
    printf("Enter the marks of the student:");
    scanf("%d",&marks) ;
    if(marks >=60)
    {
        printf("He is a SECOND CLASS student \n");
    }
    else if(marks >= 90)
    {
        printf("He is a DISTINTION student \n");
    }
    else if(marks >= 70)
    {
        printf("He is a FRIST CLASS student \n");
    }
    else
    {
     printf("Student is fail\n");
    }
    
    return 0;

}