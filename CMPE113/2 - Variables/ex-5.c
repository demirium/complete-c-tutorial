#include <stdio.h>

int main(void) {
    float average = 78.5;

    // Incorrect usage (intentional)
    printf("Average: %d\n", average);

    // Correct usage
    printf("Average: %.2f\n", average); // Mistake is that we used %d instead of %f

    return 0;
}