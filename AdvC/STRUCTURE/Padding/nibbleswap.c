 #include <stdio.h>
 
 struct bit
 {
   unsigned char lower : 4;
   unsigned char upper : 5;
 };
 
 int main ()
 {
    // unsigned num = 0xAD;
    // num = ((num << 4) | ((unsigned) num ) >> 4);
    // printf("%hhX\n", num);
    struct bit nibble;
    nibble.lower = 0xa;
    nibble.upper = 0xb;
    unsigned char temp = nibble.lower;
    nibble.lower = nibble.upper;
    nibble.upper = temp;
    printf("%hhx and %hhx\n",nibble.lower,nibble.upper);
    printf("%d",sizeof(nibble));
    


    
    return 0;
 }