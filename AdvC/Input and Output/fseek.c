// //feseel(fptr,) 2nd which position number,last argument where we wnat to move by MACROS start from the 
// SEEK_SET - from the begin
// SEEK_END - to move at the last -> from the last
// SEEK_CUR -  whereever it pointing from their
// ftell - to see the where 
#include <stdio.h>

int main ()
{
    FILE *fp = fopen("file.txt", "r+");
    fseek(fp,5,SEEK_END);
    fprintf(fp,"Hiiiii");
    // printf("%ld\n",ftell(fp));
    // fseek(fp,5,SEEK_SET);
    // printf("%ld\n",ftell(fp));
    // fseek(fp,-2,SEEK_CUR);
    // printf("%ld\n",ftell(fp));
    // fseek(fp,-5,SEEK_END);
    // printf("%ld\n",ftell(fp));

    return 0;
}