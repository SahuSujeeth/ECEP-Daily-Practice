 #include <stdio.h>
 
 void print2darray(char (*ptr)[20], int rows, int col)
 {
      for(int i=0;i<3;i++ )
      {
        for(int j=0;j<20;j++)
        {

        }
      }
 }
 int main ()
 {
    char arr[3][20] = {"Hi","Hello","Welcome"};
    print2darray(&arr);


    return 0;
 }