#include <stdio.h>

/*
    Example 1: The Simplest Function
    
    This is the most basic function example.
    - No parameters (void)
    - No return value (void)
    - Just prints something
*/

void sayHello(void) {
    printf("Hello from a function!\n");
    printf("This function doesn't need any inputs.\n");
    printf("And it doesn't return anything.\n");
}

int main(void) {
    printf("--- Function Example 1 ---\n\n");
    
    // Call the function
    sayHello();
    
    printf("\nThe function executed successfully!\n");  
    
    return 0;
}

/*
    Key points:
    - void sayHello(void) means:
      * First void: returns nothing
      * Second void: takes no parameters
    - We just call it with sayHello();
    - Simple and straightforward! thats all!
*/
