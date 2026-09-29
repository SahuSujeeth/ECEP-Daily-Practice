#include <stdio.h>

int main() 
{
    FILE *fp;
    char name[100];
    fp =fopen("dataoffgets.txt","r");
    fgets(name,sizeof(name),fp);
    printf("Read from file : %s \n",name);
    //fgets(name, 100, stdin);
    //printf("Hi %s,\n", name);
    //printf("Welcome to my world");
    return 0;
}