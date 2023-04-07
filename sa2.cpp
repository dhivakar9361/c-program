#include <stdio.h>

// Structure to hold player information
struct player {
    char name[50];
    int runs;
};

int main() {
    // Array of structures to hold information of all players
    struct player team[11];

    // Accepting batting information of players
    printf("Enter batting information of the cricket team:\n");
    for (int i = 0; i < 11; i++) {
        printf("Enter name of player %d: ", i + 1);
        scanf("%s", team[i].name);
        printf("Enter runs scored by %s: ", team[i].name);
        scanf("%d", &team[i].runs);
    }

    // Calculating total runs scored by the team
    int total_runs = 0;
    for (int i = 0; i < 11; i++) {
        total_runs += team[i].runs;
    }

    // Displaying total runs scored by the team
    printf("\nTotal Runs Scored by Team: %d\n", total_runs);

    return 0;
}

