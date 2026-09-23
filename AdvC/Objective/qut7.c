#include <stdio.h>
int main()
{
 signed char a = -1;
 unsigned char b = 255;
 printf("%d\n",a+b);
 
 if (a < b)
 printf("TRUE");
 else
 printf("FALSE");
 return 0;
}
