#include <stdio.h>

int main ()
{
    char ch;
    FILE *fp;
    fp = fopen("file1.txt","r");
    FILE *fp1;
    fp1 = fopen("file2.txt","w");
    while(fscanf(fp,"%c",&ch) != EOF)
    {
        fprintf(fp1,"%c",ch);
    }
    return 0;
}