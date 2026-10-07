 #include <stdio.h>
 void bits_mask()
 {
    int x = 0xabcdcafe;
    
    printf("%x\n", x & 0x01);
    printf("%x\n", x & 0xff);
    printf("%x\n", x & 0xff00);
    printf("%x\n", x & 0xff0000);
    printf("%x\n", x & 0xff000000);
    printf("%x\n", x & 0xff00ff00);
 }
 int main ()
 {
    bits_mask();
    return 0;
 }