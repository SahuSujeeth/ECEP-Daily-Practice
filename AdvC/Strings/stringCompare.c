 #include <stdio.h>
 #include <string.h>
//  int mystrcmp(char s[], char s1[])
//  {
//     int i=0;
//     while(s[i] && s1[i])
//     {
//         if(s[i] != s1[i])
//         {
//             break;
//         }
//         i++;
//     }
//     return s[i] - s1[i];
//  }
// char mystrcmp(char s[], char s1[])
// {
//     char result = strcmp(s,s1);
//     return result;
// }
 int main ()
 {
   //  char s[] = "ABCDE";
   //  char s1[] = "ABCDEF";
   char *str1;
   printf("Enter the stirng1:");
   scanf(" %s",str1);
   char *str2;
   printf("Enter the stirng2:");
   scanf(" %s",str2);
   
    
    printf("%d\n",strcmp(str1,str2));
    
   // printf("%d\n",strcmp(s,s1));
    //printf("%d %d\n",'h','n');
    
    
    return 0;
 }