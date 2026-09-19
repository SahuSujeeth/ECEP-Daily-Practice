 #include <stdio.h>
 
 int main (){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int sum = 0;
    for(int i=1;i<=number;i++)
    {
        sum += i;
    }
    printf("Sum of N natural numbers is: %d", sum);
    return 0;
 }