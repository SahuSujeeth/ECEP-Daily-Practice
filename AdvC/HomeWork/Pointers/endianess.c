#include <stdio.h>

int main ()
{
    int x = 0x123456;
    char *ptr = (char*)&x;
    printf("%x\n",*(ptr+1));
    int y = *(ptr+1);
    
    if(y==12)
    printf("little indian\n");
    else
    printf("big liittel\n");
    
    
    return 0;
}