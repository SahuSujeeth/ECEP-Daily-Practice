#include <stdio.h>

// Structure declaration
struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s = { 492,123.1,"Sahu"};

    // ptr is a pointer to structure p
    struct Student *ptr = &s;

    // Accessing structure members using structure pointer
    printf("Student roll number %d\n", (*ptr).roll);
    printf("student marks %f\n", (*ptr).marks);
    printf("student name %s\n", (*ptr).name);
    printf("student name %s\n", ptr->name);
    return 0;
}