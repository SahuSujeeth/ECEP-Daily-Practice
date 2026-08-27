#include <stdio.h>
void endianess(char *ptr)
{
    *ptr = (char*)ptr;
    printf("%x\n",*(ptr+2));
   // int y = *(ptr+0);
    if(*(ptr+0)== 0x56)
    printf("little indian\n");
    else
    printf("big liittel\n");
}

// }
int main ()
{
    int x = 0x123456;
    // char *ptr = (char*)&x;
    // printf("%x\n",*(ptr+2));
    // //int y = *(ptr+0);
    // if(*(ptr+0)== 0x56)
    // printf("little indian\n");
    // else
    // printf("big liittel\n");
    endianess((char*)&x);
    
    return 0;
}