#include <stdio.h>
int main()
{
 signed char s = -2;
 unsigned char u = 3;
 for (int i = 0; i < 4; i++)
 {
 printf("%d ", s + u);
 s++;
 u++;
 }
 return 0;
}
