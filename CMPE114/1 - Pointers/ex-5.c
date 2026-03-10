#include <stdio.h>

/*
    Example 5: Pointer Reassignment and NULL
    
    This example shows:
    - Pointers can be reassigned to point to different variables
    - NULL pointers and how to check for them
    - Safe pointer practices
*/

int main(void) {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    
    int *ptr = NULL;  // Initialize to NULL (safe practice!)
    
    printf("--- Pointer Example 5 ---\n\n");
    
    // Check if pointer is NULL before using
    if (ptr == NULL) {
        printf("ptr is NULL (points to nothing)\n");
        printf("It's UNSAFE to dereference a NULL pointer!\n\n");
    }
    
    printf("--- Pointing to num1 ---\n");
    ptr = &num1;
    printf("ptr now points to num1\n");
    printf("Address: %p\n", ptr);
    printf("Value: %d\n\n", *ptr);
    
    printf("--- Pointing to num2 ---\n");
    ptr = &num2;  // Reassign pointer to different variable
    printf("ptr now points to num2\n");
    printf("Address: %p\n", ptr);
    printf("Value: %d\n\n", *ptr);
    
    printf("--- Pointing to num3 ---\n");
    ptr = &num3;  // Reassign again
    printf("ptr now points to num3\n");
    printf("Address: %p\n", ptr);
    printf("Value: %d\n\n", *ptr);
    
    printf("--- Modifying through pointer ---\n");
    *ptr = 100;
    printf("After *ptr = 100:\n");
    printf("  num1 = %d (unchanged)\n", num1);
    printf("  num2 = %d (unchanged)\n", num2);
    printf("  num3 = %d (changed!)\n\n", num3);
    
    printf("--- Setting back to NULL ---\n");
    ptr = NULL;
    
    // Safe way to use a pointer
    if (ptr != NULL) {
        printf("Value: %d\n", *ptr);
    } else {
        printf("Cannot dereference: ptr is NULL\n");
    }
    
    return 0;
}

/*
    Key points:
    - Pointerss can be reassigned to different variables
    - Always initialize pointers (at least to NULL)
    - Check for NULL before dereferencing
    - Only the currently pointed-to variable is affected by changes
    - Setting ptr = NULL makes it point to nothing
    
    IMPORTANT: Dereferencing a NULL pointer causes a crash!
    Always check: if (ptr != NULL) before using *ptr
*/
