#include <stdio.h>
void arithmatic_operation(int n1, int n2, int size, int *arr[])
{
    *arr[0] = n1 + n2;
    *arr[1] = n1 - n2;
    *arr[2] = n1 * n2;
    *arr[3] = n1 / n2;

}
int main ()
{
    int num1 , num2;
    printf("Enter the num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    int sum = 0,Sub=0, Mul = 0, Div = 0;
    int *arr[4] = {&sum,&Sub,&Mul,&Div};
    // int *arr[4];
    // arr[0] = &sum;
    // arr[1] = &Sub;
    // arr[2] = &Mul;
    // arr[3] = &Div;
    arithmatic_operation(num1,num2,4,arr);
    printf("%d %d %d %d\n",sum,Sub,Mul,Div);
    return 0;
}