#include <stdio.h>

int main (){
    char direction;
    scanf("%c",&direction);
    switch(direction)
    {
        case 'N':
        case 'n':
        printf("North\n");
        break;

        case 'W':
        case 'w':
        printf("West\n");
        break;

        case 'E':
        case 'e':
        printf("East\n");
        break;

        case 'S':
        case 's':
        printf("South\n");
        break;

        default :
        printf("Invalid direction\n");
        

        
    }
    
    return 0;
}