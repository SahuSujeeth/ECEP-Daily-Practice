 #include <stdio.h>
  int main()
{
    const int i = 75;
    int x = i;

    switch(i)
    {
        case x:
            printf("It prints 75\n");
            break;

        case 75:
            printf("It prints 75\n");
            break;

        default:
            printf("It comes to default\n");
    }

    return 0;
 }