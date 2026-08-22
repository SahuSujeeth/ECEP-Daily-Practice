//WAP to implement a basic calculator.
 #include <stdio.h>
 
 int main ()
 {
    int Num1, Num2;
    char Operator;
    printf("Enter the num1, operator and num2:");
    scanf("%d %c %d",&Num1, &Operator, &Num2);

    switch(Operator)
    {
        case '+' :
        int sum = Num1 + Num2;
        printf("Sum of the Two values is %d\n",sum);
        break;

        case '-' :
        int diff = Num1 - Num2;
        printf("Diff of the Two values is %d\n",diff);
        break;

        case '*' :
        int Mul = Num1 * Num2;
        printf("Multiplecation of the Two values is %d\n",Mul);
        break;

        case '/' :
        int Divi = Num1 / Num2;
        printf("Divi of the Two values is %d\n",Divi);
        break;

        default : 
        printf("Invalid Operatr!!\n");

    }
    
    
    return 0;
 }