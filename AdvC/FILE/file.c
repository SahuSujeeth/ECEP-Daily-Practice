#include <stdio.h>

int main ()
{
    FILE *fptr = fopen("file.txt","r");
    if(fptr == NULL)
    {
        printf("file not presetn\n");
    }
    else
    {
        printf("file is present\n");    
    }
    return 0;
}
// fclose(fptr); --> it will close the file better 