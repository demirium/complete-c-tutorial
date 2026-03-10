#include <stdio.h>

/*
    Example 4: Function with Multiple Parameters
    
    This function:
    - Takes multiple parameters (two integers)
    - Performs a calculation
    - Returns the result
*/

int add(int a, int b) {
    return a + b;
}

int multiply(int x, int y) {
    return x * y;
}

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(void) {
    printf("--- Function Example 4 ---\n\n");
    
    int sum = add(10, 20);
    printf("10 + 20 = %d\n", sum);
    
    int product = multiply(5, 6);
    printf("5 * 6 = %d\n", product);
    
    int maximum = findMax(15, 23);
    printf("Maximum of 15 and 23 is: %d\n", maximum);
    
    // Combining functions!
    int result = add(multiply(2, 3), 10);  // (2*3) + 10 = 16
    printf("(2 * 3) + 10 = %d\n", result);
    
    return 0;
}

/*
    Key points:
    - Functions can take multiple parameters: int add(int a, int b)
    - You can have multiple functions in one program
    - You can combine function calls: add(multiply(2, 3), 10)
    - Each function does one specific task (good practice btw!)
*/
