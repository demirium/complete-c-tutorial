#include <stdio.h>

int main(void) {
    // Declaring and directly initializing an array
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("The very first element is: %d\n", numbers[0]);
    printf("The third element is: %d\n", numbers[2]);
    printf("The last element is: %d\n", numbers[4]);

    return 0;
}
