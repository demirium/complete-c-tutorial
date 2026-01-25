#include <stdio.h>

/*
    This program demonstrates a countdown timer using a while loop.
    It's a simple but practical example of decrement operations.
    
    The program asks for a starting number and counts down to 0.
*/

int main(void) {
    int count;
    
    printf("=== COUNTDOWN TIMER ===\n");
    printf("Enter starting number: ");
    scanf("%d", &count);
    
    printf("\nStarting countdown...\n\n");
    
    while (count >= 0) {
        if (count == 0) {
            printf("🚀 BLAST OFF! 🚀\n");
        } else {
            printf("%d...\n", count);
        }
        count--; // Decrement (count = count - 1)
    }
    
    printf("\nCountdown complete!\n");
    
    /*
        Key points:
        - We use count-- to decrease the value by 1 each time
        - The loop continues as long as count >= 0
        - We check if count is 0 to display a special message
        - This is useful for countdowns, timers, and reverse iterations

        That's all!
    */
    
    return 0;
}
