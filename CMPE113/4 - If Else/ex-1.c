#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0) { // We check if the number is positive
        printf("The number is positive.\n");
    } else { // If the number is not positive
        printf("The number is negative.\n");
    }

    return 0;
}
