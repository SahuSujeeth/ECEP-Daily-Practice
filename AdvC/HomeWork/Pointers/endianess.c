#include <stdio.h>

int main ()
{
    int x = 0x123456;
    char *ptr = (char*)&x;
    printf("%x\n",*(ptr+2));
    int y = *(ptr+0);
    if(y==0x56)
    printf("little indian\n");
    else
    printf("big liittel\n");
    return 0;
}