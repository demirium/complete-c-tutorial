#include <stdio.h>

int main(void) {
    int choice;
    float number1, number2;

    printf("--- WELCOME TO THE CALCULATOR ---\n");
    printf("    --> Type 1 for Addition\n");
    printf("    --> Type 2 for Subtraction\n");
    printf("    --> Type 3 for Multiplication\n");
    printf("    --> Type 4 for Division\n");
    printf("-> Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Please enter two numbers: ");
            scanf("%f %f", &number1, &number2);
            printf("The result is: %.2f", number1+number2); // You can also use an variable to store the result
            break;
        case 2:
            printf("Please enter two numbers: ");
            scanf("%f %f", &number1, &number2);
            printf("The result is: %.2f", number1-number2);
            break;
        case 3:
            printf("Please enter two numbers: ");
            scanf("%f %f", &number1, &number2);
            printf("The result is: %.2f", number1*number2);
            break;
        case 4:
            printf("Please enter two numbers: ");
            scanf("%f %f", &number1, &number2);
            printf("The result is: %.2f", number1/number2);
            break;
        default:
            printf("Invalid choice!");
            break;
    }

    return 0;

    /*
        After the learning of while loop, we can make this program more interactive!
    */
}