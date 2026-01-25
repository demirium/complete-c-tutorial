#include <stdio.h>

#define SECRET_NUMBER 42 // We define the secret number for guessing

int main(void) {
    int guess=-1; // We initialize the guess variable to -1
    int attempts = 0; // We initialize the attempts variable to 0

    printf("--- NUMBER GUESSING GAME ---");
    printf("\nGuess the secret number (between 1 and 100): ");

    while(guess!=SECRET_NUMBER) { // We use a while loop to keep guessing until the guess is equal to the secret number
        scanf("%d", &guess);
        attempts++;

        if(guess<SECRET_NUMBER) { // If the guess is less than the secret number
            printf("Too low! Try again.\n");
        }
        else if(guess>SECRET_NUMBER) { // If the guess is greater than the secret number
            printf("Too high! Try again.\n");
        }
    }
    
    printf("\n--- GAME OVER ---\n");
    printf("Congratulations! You guessed the number in %d attempts!\n", attempts); // We print the number of attempts

    return 0;
}