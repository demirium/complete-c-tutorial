#include <stdio.h>

/*
    This program calculates the sum of digits of a number.
    For example: 1234 → 1 + 2 + 3 + 4 = 10
    
    This demonstrates how to extract individual digits from a number
    using modulo (%) and integer division (/) operations with a while loop.
*/

int main(void) {
    int number, original_number, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    original_number = number; // Store the original number to display later
    
    while (number > 0) {
        digit = number % 10;  // Get the last digit (e.g., 1234 % 10 = 4)
        sum += digit;         // Add it to our sum
        number = number / 10; // Remove the last digit (e.g., 1234 / 10 = 123)
        
        printf("Extracted digit: %d | Current sum: %d | Remaining: %d\n", digit, sum, number);
    }
    
    printf("\n--- RESULT ---\n");
    printf("Sum of digits of %d = %d\n", original_number, sum);
    
    /*
        How it works for 1234:
        Step 1: digit = 4, sum = 4, number = 123
        Step 2: digit = 3, sum = 7, number = 12
        Step 3: digit = 2, sum = 9, number = 1
        Step 4: digit = 1, sum = 10, number = 0 
        Loop stops because number = 0
    */

    /*
        Yeah, I know, it's a bit confusing at first, but trust me, it's not that hard.
        Just take it one step at a time! You can do it!!
    */
    
    return 0;
}
