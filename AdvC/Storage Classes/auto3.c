//  #include <stdio.h>
//  int *fun()
//  {
//     int i = 10;
//     int *j = &i;
//     return j;// this may be 
// }
// int main ()
// {
//     int *i;
    
//     i = fun(); // i is pointing to memory whose object no longer exists
//     printf("*i %d\n",*i);  // nothing necesssarily overwrites that memory immediately
    
//     return 0;
//  }

#include <stdio.h>

int *fun()
{
    int i = 10;
    int *j = &i;
    return j;
}

// void test()
// {
//     int x = 50;
//     printf("x = %d\n", x);
// }

int main()
{
    int *p;

    p = fun();

   // test();

    printf("*p = %d\n", *p);

    return 0;
}