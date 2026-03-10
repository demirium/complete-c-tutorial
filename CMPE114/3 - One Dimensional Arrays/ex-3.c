#include <stdio.h>

int main(void) {
    int values[] = {45, 12, 89, 33, 71, 5, 99, 14};
    int max;
    int size = sizeof(values) / sizeof(values[0]);
    
    // Assume the first element is the largest initially
    max = values[0];
    
    // Check the rest of the elements
    for (int i = 1; i < size; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }
    
    printf("The largest value in the array is: %d\n", max);
    
    return 0;
}
