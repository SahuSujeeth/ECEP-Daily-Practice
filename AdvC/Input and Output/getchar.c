#include <stdio.h>

int main()
{
    FILE *fp;
    
    fp = fopen("hello.txt", "a");// +a will for append and read append at the add 
    printf("%c\n",fgetc(fp));
    fprintf(fp, "Hello");
    

        


    fclose(fp);

    return 0;
}