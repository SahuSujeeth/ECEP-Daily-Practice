#include <stdio.h>

int main() {
    char name[100];
    printf("Enter Your Name: \n");
    fgets(name, 100, stdin);
    printf("Hi %s,\n", name);
    printf("Welcome to my world");
    return 0;
}