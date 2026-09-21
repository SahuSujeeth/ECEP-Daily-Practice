#include <stdio.h>
 struct student 
 {
    int id;
    char name[10];
    char addresss[20];
};
int main ()
{
    struct student s1 = {10,"sahu","ap"};
    struct student s2;
    s2 = s1;
    printf("the new structure %p\n %p\n %p\n",&s2.id,&s2.name,&s2.addresss);
    if(s1 == s2)
    {
        printf("Hello\n");
        
    }
    else
    {
        printf("no\n");
        
    }
    
    
    return 0;
}