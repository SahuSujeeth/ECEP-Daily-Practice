#include <stdio.h>
int main()
{
 signed char s = -5;
 unsigned char u = 10;
 int i = 0;
 do
 {
 printf("%d ", s + u);
 s++;
 i++;
 }
 while (i < 4);
 return 0;
}
