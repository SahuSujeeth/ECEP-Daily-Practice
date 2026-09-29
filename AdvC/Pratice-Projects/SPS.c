#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char you, char computer)
{
    if(you == computer)
    {
        return -1;
    }
    else if((you == 's' && computer == 'p') || (you == 'z' && computer == 's') || (you == 'p' && computer == 'z'))
    {
        return 0;
    }
    else if((you == 'p' && computer == 's') || (you == 's' && computer == 'z') || (you == 'z' && computer == 'p'))
    {
        return 1;
    }
}
int main ()
{
    srand((unsigned int)time(NULL)); // This is the seed for to generate random number with according to time in seconds


    char you, computer;
    int result;
    int n = rand() % 100 + 1;
    //printf("Random number: %d\n", randomNumber);
    if(n < 33)
     computer = 's'; // s is denoting stone
    else if(n < 66)
     computer = 'p'; // p is denoting paper
    else
     computer = 'z'; // z is denoting scissor
    printf("\n\n\n\n\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\n\t\t\t\t\t\t");
    scanf("%c",&you);
    if(you == 's' || you == 'p' || you == 'z')
    {
         //Function call to play the game.
        result = game(you,computer);
       
    }
    else
    {
        printf("\n\t\t\t\tYou entered a invalid input!!\n");
        return 0;
    }
    if(result == -1)
    {
        printf("\n\n\t\t\tGame Draw!\n");
        
    }
    else if(result == 1)
    {
        printf("\n\n\t\t\tYou have won the game!\n");
        
    }
    else
    {
        printf("\n\n\t\t\tYou have lost the game!\n");
    }
    printf("\t\t\tYou choose : %c and Computer choose : %c\n",you, computer);
    return 0;
}