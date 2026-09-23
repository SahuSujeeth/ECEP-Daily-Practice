#include <stdio.h>
int main()
{
 signed char s = -3;
 unsigned char u = 2;
 for (int i = 0; i < 3; i++)
 {
 if (s < u)
 printf("T ");
 else
 printf("F ");
 s++;
 u--;
 }
 return 0;
}
