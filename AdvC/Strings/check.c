#include <stdio.h>
//#include<string.h>
void display(char str[], char str1[])
{
    int i=0;
   while(str[i] !='\0')
   {
    str1[i] = str[i];
    i++;
   }
   str1[i] ='\0';
   printf("%s\n",str);
   printf("%s\n",str1);
}

int main ()
{
    char str[10] = "sahoo";
    char str1[10];
    display(str,str1);
    printf("%s\n",str1);
    printf("%s\n",str);
    return 0;
}