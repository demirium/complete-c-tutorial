#include <stdio.h>

/*
    Example 3: Function with Parameters
    
    This function:
    - Takes one parameter (input)
    - Returns a calculated value
    - Shows how parameters work
*/

int square(int number) {
    int result = number * number;
    return result;
}

int main(void) {
    printf("--- Function Example 3 ---\n\n");
    
    int num = 5;
    int squared = square(num);
    
    printf("The square of %d is %d\n", num, squared);
    
    // Test with different values
    printf("The square of 3 is %d\n", square(3));
    printf("The square of 7 is %d\n", square(7));
    printf("The square of 10 is %d\n", square(10));
    
    return 0;
}

/*
    Key points:
    - int square(int number) takes one parameter called "number"
    - The parameter is like a variable that receives the value
    - We call it with: square(5) - here 5 is the argument
    - The function calculates and returns the result
*/
