#include <stdio.h>
struct S1
{
    char c1;
    char a;
    int c2;
    short t;
    int n;
    char chd;
};
// struct S2
// {
//     char c1;
//     char c2;
//     double d;
// };
int main()
{
    printf("%zd\n", sizeof(struct S1));
    return 0;
}
// , sizeof(struct S2)