#include <stdio.h>

/*
    This program demonstrates the concept of a "sentinel value".
    A sentinel value is a special value that signals the end of input.
    
    In this example, we keep adding numbers entered by the user
    until they enter 0, which acts as our sentinel value.
*/

int main(void) {
    int number, sum = 0;
    
    printf("--- Number Addition Program ---\n");
    printf("Enter numbers to add (enter 0 to stop):\n");
    
    scanf("%d", &number); // Get the first number
    
    while (number != 0) { // Continue as long as the number is not 0
        sum += number; // Add the number to our sum (sum = sum + number)
        printf("Current sum: %d\n", sum);
        scanf("%d", &number); // Get the next number
    }
    
    printf("\n--- FINAL RESULT ---\n");
    printf("Total sum: %d\n", sum);
    
    /*
        Key concept: The while loop checks the condition BEFORE each iteration.
        If the user enters 0 as the first number, the loop never executes!
    */
    
    return 0;
}
