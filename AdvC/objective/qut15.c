#include <stdio.h>
int main()
{
 signed char s = -2;
 unsigned char u = 4;
 int result = 0;
 for (int i = 0; i < 3; i++)
 {
 result = result + (s * u);
 s++;
 u++;
 }
 printf("%d", result);
 return 0;
}
