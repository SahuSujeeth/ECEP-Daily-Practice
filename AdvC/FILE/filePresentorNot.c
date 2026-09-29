#include <stdio.h>

int main ()
{
    int num;
    char str[10];
    FILE *fp;
    fp = fopen("file1.txt","w");
    if(fp == NULL)
    {
        printf("file is not present\n");
    }
    else
    {
        printf("file is present\n");
    }
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the string :");
    scanf("%s",str);
    fprintf(fp,"%d %s",num,str);
    fclose(fp);
    return 0;
}