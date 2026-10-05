#include<stdio.h>
int main()
{
    int ch;
    int char_count = 0;
    int line_count = 0;
    int flag_word = 0;
    int word_count = 0;
    while((ch = getchar()) != -1)
    {
        // printf("%c",ch);
        char_count++;
        if(ch == '\n')
        line_count++;
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            flag_word = 0;
        }
        else
        {
            if(flag_word == 0)
            {
                word_count++;
                flag_word = 1;
            }
        }



    }
    printf("\n");
    printf("Character count is : %d\n",char_count);
    printf("Line count is : %d\n",line_count);
    printf("Word count is : %d\n",word_count);
    
    
    return 0;
    
}