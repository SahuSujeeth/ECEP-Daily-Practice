 #include <stdio.h>
 int main ()
 {
   for(int i=0;i<4;i++)
   {
      for(int j=i;j<3;j++)
      {
         printf(" ");
      }
      for(int j=1;j<=(2*i+1);j++)
      {
         printf("*"); 
      }
      for(int j=i;j<3;j++)
      {
         printf(" ");
      }
      printf("\n");
   }
   return 0;
 }