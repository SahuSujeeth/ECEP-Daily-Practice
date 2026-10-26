 // -->  For the marco their is no memory allocate.just a replacement at prepocess time.
 //To create MACRO  - #define
 // To delete MACRO - #undef macro_name
 // --> What is the use of macro and what is differen between macro and constant
 #include <stdio.h>
 #define SIZE 5 // To understandable and does'nt need to change everywhere 
 #define MSG "Enter the elements:\n"
 int main ()
 {
    int arr[SIZE];
     
    printf(MSG);
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<SIZE;i++)
    {
        printf("%d",arr[i]);
        
    }

    return 0;
 }