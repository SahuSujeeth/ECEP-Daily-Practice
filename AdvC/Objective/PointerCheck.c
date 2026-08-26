 #include <stdio.h>
 
 int main ()
 {
    int a=10,b=20;
    int *p,*q;
    p = &a;
    q = p;
    *q = 25;
    p = &b;
    b = 35;
    printf("%d %d\n",a,b);
    printf("%d %d\n",*p,*q);
   return 0;  
 }