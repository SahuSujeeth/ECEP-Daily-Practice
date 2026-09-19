#include <stdio.h>
//int val;//uninitialise  variable stored at in bss
int val = 10; // initialised global variable stored in DS
int main() {
    //static int i;// this is also in bss
    static int i=100; //DS
    return 0;
}
// size a.out