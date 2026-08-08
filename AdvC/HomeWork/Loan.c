#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    float monthly_income;
    printf("Enter your monthly income: ");
    scanf("%f", &monthly_income);

    int credit_score;
    printf("Enter your credit score (300-850): ");
    scanf("%d", &credit_score);

    int Min_Age = 22;
    int Max_Age = 60;
    float MIN_INCOME = 30000.0;
    int MIN_CREDIT_SCORE = 650;

    if (age >= Min_Age && age <= Max_Age)
    {
        if (monthly_income >= MIN_INCOME) 
        {
            if (credit_score >= MIN_CREDIT_SCORE) 
            {
                printf("Congratulations! Your loan application is APPROVED.\n");
            } 
            else 
            {
                printf("Rejected Your credit score is too low.\n");
                printf("Minimum required credit score is %d.\n", MIN_CREDIT_SCORE);
            }
        } 
        else 
        {
            printf("Your monthly income does not meet the minimum requirement.\n");
            printf("Minimum required monthly income is $%.2f.\n", MIN_INCOME);
        }
    } 
    else
    {
        printf("You can't given loan to you, your age does not meet our policy guidelines\n");
    }

    return 0;
}
