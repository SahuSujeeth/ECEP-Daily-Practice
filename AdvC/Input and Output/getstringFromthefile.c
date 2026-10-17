#include <stdio.h>

int main()
{
    FILE *fp;
    // if the file is not present then it will create.
    fp = fopen("hello.txt", "r");// read file present deletes the old content  writes what we pass

    if (fp == NULL)
        printf("File is not present Please create it!!\n");
        
    char ch;
    while((ch = fgetc(fp)) != -1)
    {
        printf("%c ",ch);
        
    }


    fclose(fp);

    return 0;
}