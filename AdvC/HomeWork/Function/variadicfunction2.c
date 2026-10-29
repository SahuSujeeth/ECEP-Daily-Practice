 #include <stdio.h>
 #include <stdarg.h>
 int print(char *str, ...)
 {
    va_list ap;
    va_start(ap, str);
    
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '%')
        {
            switch (str[i+1])
            {
            case 'd':
                printf("%d\n",va_arg(ap,int));
                break;
            case 's' :
                printf("%s\n",va_arg(ap,char *));
                break;
            case 'c' : 
                printf("%c\n",va_arg(ap,int));
                break;   
            default:
                break;
            }
            
        }
        i++;
    }
 }
 int main ()
 {
    print("%d %s %c",10,"hello",'S');
    return 0;
 }