#include <stdio.h>

struct customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance(struct customer cust[], int n) {
    printf("Customers with balance less than 100 Rs:\n");
    for (int i = 0; i < n; i++) {
        if (cust[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", cust[i].account_no, cust[i].name);
        }
    }
}

int main() {
    struct customer cust[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account No: ");
        scanf("%d", &cust[i].account_no);
        printf("Name: ");
        scanf("%s", cust[i].name);
        printf("Balance: ");
        scanf("%f", &cust[i].balance);
    }

    print_low_balance(cust, 3);

    return 0;
}

