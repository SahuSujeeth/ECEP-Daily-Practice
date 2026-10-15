#include <stdio.h>

void fun(int *marks[], int size)
{
     *(marks[0]) = 99;
     *(marks[1]) = 60;
     *(marks[2]) = 70;
}
int main ()
{
    int maths, eng, science;
    int* marks[3];
    marks[0] = &maths;
    marks[1] = &eng;
    marks[2] = &science;
    for(int i=0;i<3;i++)
    {
        scanf("%d",marks[i]); 
    }
    fun(marks,3);
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(marks[i])); 
    }
    return 0;
}