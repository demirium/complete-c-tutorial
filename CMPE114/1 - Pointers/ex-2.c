#include <stdio.h>

/*
    Example 2: Modifying Values Through Pointers
    
    This example shows:
    - How to change a value using a pointer
    - The connection between the variable and pointer
*/

int main(void) {
    int num = 10;
    int *ptr = &num;    // Declare and initialize in one line
    
    printf("--- Pointer Example 2 ---\n\n");
    
    printf("Initial value of num: %d\n", num);
    printf("Initial value of *ptr: %d\n", *ptr);
    
    printf("\n--- Modifying through pointer ---\n");
    
    *ptr = 50;  // Change the value at the address ptr points to
    
    printf("After *ptr = 50:\n");
    printf("Value of num: %d\n", num);        // num changed too!
    printf("Value of *ptr: %d\n", *ptr);
    
    printf("\n--- Modifying the variable directly ---\n");
    
    num = 100;  // Change num directly
    
    printf("After num = 100:\n");
    printf("Value of num: %d\n", num);
    printf("Value of *ptr: %d\n", *ptr);       // *ptr reflects the change!
    
    return 0;
}

/*
    Key points:
    - When you change *ptr, you change the variable it points to
    - When you change the variable, *ptr shows the new value
    - They're looking at the SAME location in memory
    - This is the power of pointers - indirect access!
*/
