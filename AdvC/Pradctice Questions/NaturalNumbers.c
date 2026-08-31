  #include <stdio.h>
  void natural(int n)
  {
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
  }
  int main ()
  {
    int n;
    scanf("%d",&n);
    natural(n);
    return 0;
  }