#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for student
struct Student {
    int roll_no;
    char stud_name[50];
    float mark1;
    float mark2;
    float mark3;
    float total_marks;
    float avg_marks;
};

int main() {
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Student students[n];

    // Take input for each student
    for (i = 0; i < n; i++) {
        printf("\nEnter Record for Student-%d\n", i+1);

        printf("Enter Roll-No. : ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Name : ");
        scanf("%s", students[i].stud_name);

        printf("Enter Marks of Subject 1 : ");
        scanf("%f", &students[i].mark1);

        printf("Enter Marks of Subject 2 : ");
        scanf("%f", &students[i].mark2);

        printf("Enter Marks of Subject 3 : ");
        scanf("%f", &students[i].mark3);

        // Calculate total and average marks
        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = students[i].total_marks / 3.0;
    }

    // Sort the students in descending order of total marks
    struct Student temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (students[i].total_marks < students[j].total_marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Display the sorted records
    printf("\nRecords in Descending Order (According to Total-Marks):\n");
    printf("ROLLNO\tNAME\tTOTAL-MARKS\tAVG-MARKS\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t\t%.2f\n", students[i].roll_no, students[i].stud_name,
               students[i].total_marks, students[i].avg_marks);
    }

    return 0;
}

