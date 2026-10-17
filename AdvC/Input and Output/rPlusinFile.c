#include <stdio.h>

int main()
{
    FILE *fp;
    // if the file is not present then it will return null.
    fp = fopen("hello.txt", "r+");// read file present  write no of characters overwrites from the begigging

    if (fp == NULL)
        printf("File is not present Please create it!!\n");
        

    fprintf(fp, "Hello");

    fclose(fp);

    return 0;
}