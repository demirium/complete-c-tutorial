#include <stdio.h>

/*
    Example 1: Basic Pointer Introduction
    
    This is the simplest pointer example.
    - Declare a pointer
    - Assign it an address
    - Use it to access a value
*/

int main(void) {
    int number = 42;        // Regular variable
    int *ptr;               // Pointer declaration
    
    ptr = &number;          // Store address of number in ptr
    
    printf("--- Pointer Example 1 ---\n\n");
    
    // Print the value of number
    printf("Value of number: %d\n", number);
    
    // Print the address of number
    printf("Address of number: %p\n", &number);
    
    // Print the value stored in ptr (which is the address)
    printf("Value of ptr (address it stores): %p\n", ptr);
    
    // Print the value that ptr points to (dereferencing)
    printf("Value at the address ptr points to (*ptr): %d\n", *ptr);
    
    printf("\nNotice: &number and ptr show the same address!\n");
    printf("Notice: number and *ptr show the same value!\n");
    
    return 0;
}

/*
    Key points:
    - int *ptr declares a pointer to an integerr
    - ptr = &number makes ptr point to number
    - &number gives the address of number
    - *ptr gives the value at the address stored in ptr
    
    This is the foundation of pointers!
*/
