#include <stdio.h>
#include <string.h>

// Define structure
struct cricket {
    char player_name[50];
    int runs;
    int wickets;
    int matches;
};

// Function to add player data
void addPlayer(struct cricket *p) {
    printf("Enter name: ");
    scanf("%s", p->player_name);

    printf("Enter runs: ");
    scanf("%d", &p->runs);

    printf("Enter wickets: ");
    scanf("%d", &p->wickets);

    printf("Enter matches: ");
    scanf("%d", &p->matches);
}

// Function to display player data
void displayPlayer(struct cricket p) {
    printf("\nName: %s | Runs: %d | Wickets: %d | Matches: %d\n",
           p.player_name, p.runs, p.wickets, p.matches);
}

// Main function
int main() {
    struct cricket p1;
    
    addPlayer(&p1);
    displayPlayer(p1);
    
    return 0;
}
