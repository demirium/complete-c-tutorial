#include <stdio.h>

/*
    Example 5: Multiple Functions Working Together
    
    This is a more realistic example showing:
    - Multiple related functions
    - Functions calling other functions
    - Combining everything we've learned
*/

// Check if a number is even
int isEven(int num) {
    if (num % 2 == 0) {
        return 1;  // True (1 means yes)
    } else {
        return 0;  // False (0 means no)
    }
}

// Calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

// Print a separator line (void function)
void printSeparator(void) {
    printf("-------------------------\n");
}

// Calculate average of two numbers
float average(int a, int b) {
    float sum = a + b;
    return sum / 2.0;  // Note: we use 2.0 to get decimal result
}

int main(void) {
    printf("--- Function Example 5 ---\n\n");
    
    // Test even checker
    int number = 10;
    if (isEven(number)) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
    
    printSeparator();
    
    // Calculate factorial
    int fact = factorial(5);
    printf("Factorial of 5 is: %d\n", fact);
    
    printSeparator();
    
    // Calculate average
    float avg = average(10, 15);
    printf("Average of 10 and 15 is: %.2f\n", avg);
    
    printSeparator();
    
    // Combining functions!
    int num1 = 6, num2 = 8;
    if (isEven(num1) && isEven(num2)) {
        printf("Both %d and %d are even!\n", num1, num2);
        float result = average(num1, num2);
        printf("Their average is: %.2f\n", result);
    }
    
    return 0;
}

/*
    Key points:
    - We can have many functions with different purposes
    - Some return values (int, float), some don't (void)
    - Functions can call other functions
    - This makes code organized and easy to understand
    - Each function has a clear, specific purpose
    
    This is how real programs are structured!
*/
