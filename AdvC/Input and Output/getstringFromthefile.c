#include <stdio.h>

int main()
{
    FILE *fp;
    // if the file is not present then it will create.
    fp = fopen("hello.txt", "r");// read file present deletes the old content  writes what we pass
    printf("eoff\n");
    
    if (fp == NULL)
        printf("File is not present Please create it!!\n");
        
    char ch;
    while((ch = fgetc(fp)) > 0)
    {
        printf("%c ",ch);
        
    }
    printf("\n");
    


    fclose(fp);

    return 0;
}