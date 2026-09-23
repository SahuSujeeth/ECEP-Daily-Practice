#include <stdio.h>
int main()
{
 signed char s = -2;
 unsigned char u = 5;
 int count = 0;
 while (count < 4)
 {
 printf("%d ", s + u);
 s++;
 u--;
 count++;
 }
 return 0;
}