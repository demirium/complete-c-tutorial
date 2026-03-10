#include <stdio.h>

/*
    Example 3: Pointers with Different Data Types
    
    This example shows:
    - Pointers work with any data type
    - Each pointer type matches its variable type
*/

int main(void) {
    // Different data types
    int intNum = 42;
    float floatNum = 3.14;
    char letter = 'A';
    
    // Pointers for each type
    int *intPtr = &intNum;
    float *floatPtr = &floatNum;
    char *charPtr = &letter;
    
    printf("--- Pointer Example 3 ---\n\n");
    
    printf("Integer:\n");
    printf("  Value: %d\n", intNum);
    printf("  Address: %p\n", intPtr);
    printf("  Value via pointer: %d\n", *intPtr);
    
    printf("\nFloat:\n");
    printf("  Value: %.2f\n", floatNum);
    printf("  Address: %p\n", floatPtr);
    printf("  Value via pointer: %.2f\n", *floatPtr);
    
    printf("\nCharacter:\n");
    printf("  Value: %c\n", letter);
    printf("  Address: %p\n", charPtr);
    printf("  Value via pointer: %c\n", *charPtr);
    
    printf("\n--- Modifying through pointers ---\n");
    
    *intPtr = 100;
    *floatPtr = 9.99;
    *charPtr = 'Z';
    
    printf("New values:\n");
    printf("  intNum: %d\n", intNum);
    printf("  floatNum: %.2f\n", floatNum);
    printf("  letter: %c\n", letter);
    
    return 0;
}

/*
    Key points:
    - int* for integers, float* for floats, char* for characters
    - The pointer type must match the variable type
    - Each pointer works the same way regardless of type
    - Always use the correct placeholder (%d, %f, %c, %p)
*/
