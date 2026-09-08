 #include <stdio.h>
 
 int main ()
 {
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};
    int i=0;
    int result = 1;
    for(int i=0;i<5;i++)
    {
        int j;
        for(j=i;j<=i;j++)
        {
            if(a[i] != b[j])
            {
                result
                break;
            }
        }
        
        
    }
    return 0;
 }