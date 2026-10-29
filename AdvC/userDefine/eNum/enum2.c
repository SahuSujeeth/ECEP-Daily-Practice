#include <stdio.h>

int main ()
{
    enum num{zero,three,two};// this is local variable to this function only u cannot acces outside this main function.
   // enum num{sunday,one,monday};
    printf("%d\n",two);//same error like redefintion error while compiling 
    // enum day days;
    // days =10;
    enum day{sunday,one=10,monday};
    switch (10)
    {
    case one:// it is consider as the intgral constant only
        printf("One\n");
        break;
    }

    
    return 0;
}