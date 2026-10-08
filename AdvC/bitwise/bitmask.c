 #include <stdio.h>
 void bits_mask()
 {
    // int x = 0xabcdcafe;
    
    // printf("%b\n", x );
    // printf("%x\n", x & 0x01);
    // printf("%x\n", x & 0xff);
    // printf("%x\n", x & 0xff00);
    // printf("%x\n", x & 0xff0000);
    // printf("%x\n", x & 0xff000000);
    // printf("%x\n", x & 0xff00ff00);
     
    // printf("-------------------------\n");
    // printf("SET\n");
    
    // printf("%b\n",x);
    // // set bit-5 and bit-13 out of 32-bits value
    // x = x | 0x10;
    // x = x | 0x1000;
    // printf("%b\n",x);

    // printf("-------------------------\n");
    // printf("TOGGLE\n");
    // // toggle bit - 7
    // // x = x ^ 0x80;
    // // printf("%b\n",x);
    
    // printf("-------------------------\n");
    // printf("GET\n");
    // //checking the value of bit 10
    // if(x & 0x400)
    // {
    //     printf("Bit 10 is set\n");
        
    // }
    // else
    // {
    //     printf("Bit 10 is not set\n");
        
    // }
    // printf("-------------------------\n");
    int x = -1;
    int countOfOne = 0;
    for(int i=0;i<32;i++)
    {
        int res = x & (1 << i);
        if(res)
         countOfOne++;
    }
    printf("Number of ONES is : %d\n",countOfOne);
    
    
 }
 int main ()
 {
    bits_mask();
    return 0;
 }