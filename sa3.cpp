#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Student {
    char name[50];
    int roll_number;
    struct tm birthday;
    struct tm admission_date;
};

int calculate_age(struct tm birthdate, struct tm adm_date) {
    int age = adm_date.tm_year - birthdate.tm_year;
    if ((adm_date.tm_mon < birthdate.tm_mon) || 
       ((adm_date.tm_mon == birthdate.tm_mon) && (adm_date.tm_mday < birthdate.tm_mday))) {
        age--;
    }
    return age;
}

int main() {
    struct Student student;

    printf("Enter Roll-Number: ");
    scanf("%d", &student.roll_number);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Birth-Date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &student.birthday.tm_mday, &student.birthday.tm_mon, &student.birthday.tm_year);
    student.birthday.tm_year -= 1900;
    student.birthday.tm_mon -= 1;

    printf("Enter Admission-Date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &student.admission_date.tm_mday, &student.admission_date.tm_mon, &student.admission_date.tm_year);
    student.admission_date.tm_year -= 1900;
    student.admission_date.tm_mon -= 1;

    int age = calculate_age(student.birthday, student.admission_date);
    printf("Approximate Age of Student at the Time of Admission: %d Years\n", age);

    return 0;
}

