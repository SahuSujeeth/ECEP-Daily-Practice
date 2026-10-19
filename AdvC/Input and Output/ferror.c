#include <stdio.h>

int main()
{
    FILE *fp;

    // ferror is for to check is their mistake in our program like by using r mode we are trying to write some content this is error 
    // if their is present an error it will give 1 or else it will give 0.
    fp = fopen("hello.txt", "r");
    fprintf(fp, "hello");
    printf("%d\n",ferror(fp));

    fp = fopen("hello.txt", "w");
    fprintf(fp, "hello");
    printf("%d\n",ferror(fp));
    
    fclose(fp);

    return 0;
}