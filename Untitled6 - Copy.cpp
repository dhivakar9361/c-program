6 .#include <stdio.h>

int main() {
    int amount, notes[8] = {500, 100, 50, 20, 10, 5, 2, 1}; // Denominations of notes
    int count[8] = {0}; // Count of each denomination of notes

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (int i = 0; i < 8; i++) {
        count[i] = amount / notes[i]; // Count the number of notes of each denomination
        amount = amount % notes[i]; // Update the remaining amount
    }

    printf("Total number of notes:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d: %d\n", notes[i], count[i]); // Print the count of each denomination of notes
    }

    return 0;
}

