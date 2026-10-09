#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *ptr = malloc(8);
    
    int char_flag1 = 0;
    int char_flag2 = 0;
    int short_flag = 0;
    int int_flag = 0;
    int float_flag = 0;
    int double_flag = 0;
    while(1)
    {
        printf("\nSelect the menu :\n");
        int i = 0;
        printf("1.ADD ELEMENT\n2.REMOVE ELEMENT\n3.DISPLAY ELEMENT\n4.EXIT\n");
        int choice;
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int addChoice;
                printf("\nSelect type you want to add :\n");
                printf("1.Char\n2.Short\n3.Int\n4.Float\n5.Double\n");
                printf("Enter the add choice: ");
                scanf("%d",&addChoice);
                
                switch(addChoice)
                {
                    case 1:
                    {
                        if(char_flag1 == 0 && double_flag == 00)
                        {
                            printf("Enter the Character1: ");
                            scanf("%d",(char*)ptr);
                            char_flag1 = 1;
                        }
                        else if(char_flag2 == 0 && double_flag == 0)
                        {
                            printf("Enter the Character2: ");
                            scanf("%c",(char*)ptr + 1);
                            char_flag1 = 1;
                        }
                        else
                        {
                            printf("Memory is full!!");
                        }
                    }
                    break;
                    case 2 :
                    {
                        if(short_flag == 0 && double_flag == 0)
                        {
                            printf("Enter the Short: ");
                            scanf("%c",(char*)ptr + 1);
                            short_flag = 1;
                        }
                        else
                        {
                            printf("Memory is full!!\n");
                        }
                    }
                    break;
                    case 3:
                    {
                        if(int_flag == 0 && double_flag == 0)
                        {
                            printf("Enter the Integer Number: ");
                            scanf("%d",(int*)ptr + 1);
                            int_flag = 1;
                        }
                        else
                        {
                            printf("Memory is full!!\n");
                        }
                    }
                    break;
                    case 4:
                    {
                        if(float_flag == 0 && int_flag == 0 && double_flag == 0)
                        {
                            printf("Enter the float: ");
                            scanf("%f",(float*)ptr + 1);
                            float_flag = 1;
                        }
                        else
                        {
                            printf("Memory is full!!\n");
                        }
                    }
                    break;
                    case 5:
                    {
                        if(float_flag == 0 && int_flag == 0 && double_flag == 0 && char_flag1 == 0 && char_flag2 == 0 && short_flag == 0)
                        {
                            printf("Enter the double: ");
                            scanf("%lf",(double*)ptr + 0);
                            double_flag = 1;
                        }
                    }
                }
            }
            break;
            case 2 :
            {
                printf("2.Remove Element\n");
            }
            break;
            
            case 3:
            {
                printf("Display Elements\n");
                if(char_flag1 == 1)
                {
                    printf("0 -> %c(char)\n",((char *)ptr)[0]);
                }
                if(char_flag2 == 1)
                {
                    printf("1 -> %c(char)\n",((char *)ptr)[1]);
                }
                if(short_flag == 1)
                {
                    printf("2 -> %hd(short)\n",((short *)ptr)[2]);
                }
                if(int_flag == 1)
                {
                    printf("4 -> %d(int)\n",((int *)ptr)[4]);
                }
                if(double_flag == 1)
                {
                    printf("0 -> %lf(double)\n",((double *)ptr)[0]);
                }
            }
        }
    }
    return 0;
}