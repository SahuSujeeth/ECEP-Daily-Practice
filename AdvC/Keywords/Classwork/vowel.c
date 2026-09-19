#include <stdio.h>

int main (){
    char ch = '-';
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("%c character is alphabet\n",ch);
        
    }
    else
    {
        printf("%c Not a chracter\n",ch);
        
    }
    return 0;
}