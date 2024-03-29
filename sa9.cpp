#include <stdio.h>
#include <string.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;
    
    printf("Enter student name: ");
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = 0; // remove newline character
    
    printf("Enter student GPA: ");
    scanf("%f", &s.gpa);
    
    printf("Student name: %s\n", s.name);
    printf("Student GPA: %.2f\n", s.gpa);
    
    return 0;
}

