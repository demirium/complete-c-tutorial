#include <stdio.h>
#include <string.h>

// Using typedef to avoid writing 'struct' everywhere
typedef struct {
    char name[30];
    int score;
} Player;

int main(void) {
    // We can create an array of structs
    Player team[3];
    
    strcpy(team[0].name, "Jake");
    team[0].score = 95;
    
    strcpy(team[1].name, "Amy");
    team[1].score = 98;
    
    strcpy(team[2].name, "Rosa");
    team[2].score = 90;
    
    printf("--- Team Scores ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: %d\n", team[i].name, team[i].score);
    }
    
    return 0;
}
