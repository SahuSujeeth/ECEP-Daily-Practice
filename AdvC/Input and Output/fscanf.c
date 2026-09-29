#include <stdio.h>
//int fscanf(FILE *restrict stream, const char *restrict format, ...);
int main()
{
    FILE *fp;
    int num, num2;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
    printf("File does not exist\n");
    return 1;
    }
    int result = fscanf(fp,"%d %d", &num,&num2); // Syntax is fscanf(stream, "format", &variable); 
    //printf("num = %d\n", num);
    printf("Return value is %d\n", result);
    
    
    //fprintf(fp,"\nHi Sahu How are you!!\n");
   // fprintf(fp,"412");
    fclose(fp);

    return 0;
}