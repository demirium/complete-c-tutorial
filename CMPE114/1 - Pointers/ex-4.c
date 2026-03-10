#include <stdio.h>

/*
    Example 4: Multiple Pointers to the Same Variable
    
    This example shows:
    - Multiple pointers can point to the same variable
    - Changes through any pointer affect all of them
*/

int main(void) {
    int value = 25;
    
    // Create multiple pointers to the same variable
    int *ptr1 = &value;
    int *ptr2 = &value;
    int *ptr3 = &value;
    
    printf("--- Pointer Example 4 ---\n\n");
    
    printf("Initial state:\n");
    printf("  value = %d\n", value);
    printf("  *ptr1 = %d\n", *ptr1);
    printf("  *ptr2 = %d\n", *ptr2);
    printf("  *ptr3 = %d\n", *ptr3);
    
    printf("\nAll pointers point to the same address:\n");
    printf("  Address of value: %p\n", &value);
    printf("  ptr1: %p\n", ptr1);
    printf("  ptr2: %p\n", ptr2);
    printf("  ptr3: %p\n", ptr3);
    
    printf("\n--- Changing through ptr1 ---\n");
    *ptr1 = 50;
    
    printf("After *ptr1 = 50:\n");
    printf("  value = %d\n", value);
    printf("  *ptr1 = %d\n", *ptr1);
    printf("  *ptr2 = %d\n", *ptr2);
    printf("  *ptr3 = %d\n", *ptr3);
    
    printf("\n--- Changing through ptr2 ---\n");
    *ptr2 = 100;
    
    printf("After *ptr2 = 100:\n");
    printf("  value = %d\n", value);
    printf("  *ptr1 = %d\n", *ptr1);
    printf("  *ptr2 = %d\n", *ptr2);
    printf("  *ptr3 = %d\n", *ptr3);
    
    printf("\nConclusion: All pointers see the same value!\n");
    
    return 0;
}

/*
    Key points:
    - You can have multiple pointers to the same variable
    - They all store the same address
    - Changing the value through ANY pointer affects all of them
    - They all "look at" the same memory location
    
    This is important for understanding how pointers work!
*/
