#include <stdio.h>

void itoa(int num, char str[]);

int main()
{
    int num;
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    itoa(num, str);
    
    printf("Integer to string is %s", str);
}
void itoa(int num, char str[])
{
    
    int count = 0;
    int remainder;
    int temp = num;
    while(temp > 0)
    {
        count++;
        temp /= 10;
    }
    //printf("%d\n",count);
    
    temp = num;
    int i = 0;
    while(temp > 0)
    {
      //remainder = temp % 10;
      str[i] = temp % 10 + '0';
      temp = temp / 10;
      i++;
    }
   // printf("%d\n",i);
    
    str[i] = '\0';
    int start_index = 0;
    int last_index = count - 1;

    while(start_index < last_index)
    {
        char temp = str[start_index];
        str[start_index] = str[last_index];
        str[last_index] = temp;
        start_index++;
        last_index--;
    }
}