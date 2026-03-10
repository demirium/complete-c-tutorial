#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    float average;
    
    // Size computation
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    
    average = (float)sum / size;
    
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);
    
    return 0;
}
