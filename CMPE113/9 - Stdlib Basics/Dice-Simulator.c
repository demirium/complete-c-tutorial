#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Seed the random number generator
    srand(time(0));  // Use current time as seed
    
    // Generate random numbers
    printf("Random number 1: %d\n", rand());
    printf("Random number 2: %d\n", rand());
    printf("Random number 3: %d\n", rand());
    
    // Generate a random number between 1 and 100
    int random_1_to_100 = (rand() % 100) + 1;
    printf("Random (1-100): %d\n", random_1_to_100);
    
    // Generate a random number between 1 and 6 (dice)
    int dice = (rand() % 6) + 1;
    printf("Dice roll: %d\n", dice);
    
    // That's it! You now have a dice simulator! You now finish the first step of the C Programming course!

    return 0;
}