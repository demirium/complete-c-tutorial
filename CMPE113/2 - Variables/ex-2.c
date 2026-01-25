#include <stdio.h>

int main(void) {
    float pi = 3.141592;

    printf("Pi: %f\n", pi); 
    printf("Pi: %.2f\n", pi); // %.2f means 2 decimal places
    printf("Pi: %.3f\n", pi); // %.3f means 3 decimal places
    printf("Pi: %.4f\n", pi); // %.4f means 4 decimal places
    printf("Pi: %.5f\n", pi); // %.5f means 5 decimal places
    printf("Pi: %.10f\n", pi); // %.10f means 10 decimal places

    return 0;
}