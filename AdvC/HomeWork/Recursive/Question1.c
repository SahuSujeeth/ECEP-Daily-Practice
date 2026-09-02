  #include <stdio.h>
  void fun(int a)
  {
    if(a>0)
    {
        fun(a-1);
        fun(--a);
    }
    printf("%d",a);
    
  }
  int main ()
  {
    
    int a=4;
    fun(a);
    return 0;
  }