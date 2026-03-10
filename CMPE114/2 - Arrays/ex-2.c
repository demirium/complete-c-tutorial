#include <stdio.h>

int main(void) {
    // Array declaration without initializing right away
    int scores[3];

    // Assigning values manually one by one
    scores[0] = 85;
    scores[1] = 92;
    scores[2] = 78;

    printf("Score 1: %d\n", scores[0]);
    printf("Score 2: %d\n", scores[1]);
    printf("Score 3: %d\n", scores[2]);

    // Modifying an element
    scores[1] = 95;
    printf("Updated Score 2: %d\n", scores[1]);

    return 0;

    // YOU DID IT!!!!!!
}
