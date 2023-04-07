#include <stdio.h>

// Define a union type named "Data" that can store either an integer or a float value
union Data {
    int integer;
    float floating;
};

int main() {
    union Data data;  // Declare a variable "data" of type "Data"

    char choice;  // Variable to hold the user's choice

    printf("Enter a value of your choice (i for integer, f for float): ");
    scanf("%c", &choice);

    if (choice == 'i') {  // If the user chose integer, prompt for an integer value
        printf("Enter an integer value: ");
        scanf("%d", &data.integer);
        printf("You entered: %d\n", data.integer);
    } else if (choice == 'f') {  // If the user chose float, prompt for a float value
        printf("Enter a float value: ");
        scanf("%f", &data.floating);
        printf("You entered: %f\n", data.floating);
    } else {  // If the user entered an invalid choice, print an error message and exit
        printf("Invalid choice!\n");
        return 1;
    }

    return 0;
}

