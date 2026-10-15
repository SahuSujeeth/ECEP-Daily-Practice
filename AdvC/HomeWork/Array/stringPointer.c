#include <stdio.h>

void fun(char *arr[], int size)
{
     for(int i=0;i<3;i++)
    {
        printf("%s ",arr[i]); 
    }
}
int main ()
{
    char str1[50];
    char str2[50];
    char str3[50];
    char* strings[3];
    strings[0] = str1;
    strings[1] = str2;
    strings[2] = str3;
    for(int i=0;i<3;i++)
    {
        scanf("%s",strings[i]); 
    }
    fun(strings,3);
   
    return 0;
}