 #include <stdio.h>
 
 int main ()
 {
    int n1 = 0x12345678;
    int n2 = 0xabcdef12;
    char *ptr1 = (char*)&n1;
    char *ptr2 = (char*)&n2;
    for(int i=0;i<4;i++)
    {
        char temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
    printf("%x\n %x\n",n1,n2);
    
    return 0;
 }