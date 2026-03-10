#include <stdio.h>

/*
    Example 2: Function with Return Value
    
    This function:
    - Takes no parameters
    - Returns an integer value
    - Shows how to use return values
*/

int getNumber(void) {
    return 42;  // Return a value to the caller
}

int main(void) {
    printf("--- Function Example 2 ---\n\n");
    
    // Call the function and store its return value
    int myNumber = getNumber();
    
    printf("The function returned: %d\n", myNumber);
    
    // You can also use the return value directly
    printf("Direct use: %d\n", getNumber());
    
    return 0;
}

/*
    Key points:
    - int getNumber(void) means it returns an int
    - return 42; sends the value back
    - We can store it: int myNumber = getNumber();
    - Or use it directly: printf("%d", getNumber());
    thats all!
*/
