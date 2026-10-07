 #include <stdio.h>
 void bits_ops()
 {
    int x = 0;
    x = x | 0x01;
    printf("%08b\n",x);

    x = x | 0x02;
    printf("%08b\n",x);

    x = x & 0x01;
    printf("%08b\n",x);

    x = x ^ 0x01;
    printf("%08b\n",x);

    x = ~x | 0x01;
    printf("%08b\n",x);
    
 }
 int main ()
 {
    bits_ops();
    return 0;
 }