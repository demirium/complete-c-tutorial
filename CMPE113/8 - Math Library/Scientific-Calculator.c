#include <stdio.h>
#include <math.h> // We include the math.h library to use the pow() and sqrt() functions

int main(void) {
    double num1, num2;
    char operator;

    printf("Enter expression (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &num1, &operator, &num2); // We read the expression from the user

    switch (operator) {
        case '+': // We handle the addition case
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-': // We handle the subtraction case
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*': // We handle the multiplication case
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/': // We handle the division case
            if (num2 != 0) { // We check if the denominator is not zero
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '^': // We handle the power case
            printf("Result: %.2lf\n", pow(num1, num2)); // We use the pow() function to calculate the power
            break;
        case 's': // We handle the square root case
            printf("Result: %.2lf\n", sqrt(num1)); // We use the sqrt() function to calculate the square root
            break;
        default: // We handle the default case
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}