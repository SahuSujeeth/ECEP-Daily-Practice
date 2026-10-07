#include <stdio.h>
void bit_mask()
{
    int x = 0;
    int position;
    char ch;

    printf("X = %032b >",x);

    while((ch = getchar()) != 'q')
    {
        switch(ch)
        {
            case '\n':
            case ' ' :
            continue;
            case 'q' :
            printf("Byee!\n");
            return ;
            break;
            
            case 's' :
                printf("Which bit to set? ");
                scanf("%d",&position);
                x = x | (0x01 << position);
                break;
            case 'c' :
                printf("Which bit to clear? ");
                scanf("%d",&position);
                x = x & ~(0x01 << position);
                break;  
            case 't' :
                printf("Which bit to toggle? ");
                scanf("%d",&position);
                x = x ^ (0x01 << position);
                break;
        }
        printf("X = %032b>",x);
        
    }
}
int main ()
{
    bit_mask();
    return 0;
}