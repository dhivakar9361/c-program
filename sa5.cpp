#include <stdio.h>
#define MAX_EMPLOYEES 100

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, max_index;
    struct Employee emp[MAX_EMPLOYEES];
    float max_salary = -1;

    printf("How many employee info you want to accept: ");
    scanf("%d", &n);

    // Accept employee details
    for(i=0; i<n; i++) {
        printf("\nEnter details of Employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find employee with highest salary
    for(i=0; i<n; i++) {
        if(emp[i].salary > max_salary) {
            max_salary = emp[i].salary;
            max_index = i;
        }
    }

    // Display employee with highest salary
    printf("\nEmployee with highest salary:\n");
    printf("EMPNO\t NAME\t SALARY\n");
    printf("%d\t %s\t %.2f\n", emp[max_index].eno, emp[max_index].ename, emp[max_index].salary);

    return 0;
}

