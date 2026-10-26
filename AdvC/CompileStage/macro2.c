 #include <stdio.h>
 
 #define SIZE 5 
 void fun(); 
 int main ()
 {
   printf("%d\n",SIZE);
   fun();
   printf("%d\n",SIZE);

    return 0;
 }
 void fun()
 {
    #define SIZE 15
    printf("%d\n",SIZE);
    
 }