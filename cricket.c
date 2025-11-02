#include <stdio.h>

// Define structure
struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

int main() {
    // Declare structure variable
    struct cricket player1;

    // Access members using dot operator
    printf("Enter player name: ");
    scanf("%s", player1.player_name);

    printf("Enter team name: ");
    scanf("%s", player1.team_name);

    printf("Enter batting average: ");
    scanf("%f", &player1.batting_average);

    // Display structure data
    printf("\n--- Player Details ---\n");
    printf("Player Name: %s\n", player1.player_name);
    printf("Team Name: %s\n", player1.team_name);
    printf("Batting Average: %.2f\n", player1.batting_average);

    return 0;
}
