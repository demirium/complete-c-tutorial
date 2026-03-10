#include <stdio.h>

int add(int num1, int num2, int result) { // add(10, 2, result)
    result = num1 + num2;
    return result;
}

int subtract(int num1, int num2, int result) { // subtract(10, 2, result)
    result = num1 - num2;
    return result;
}

int multiply(int num1, int num2, int result) { // multiply(10, 2, result)
    result = num1 * num2;
    return result;
}


int divide(int num1, int num2, int result) { // divide(10, 2, result)
    result = num1 / num2;
    return result;
}


int main(void) {
    int num1, num2, result;
    char operator;

    printf("Please enter the operation (F.e: 10 + 2)"); // Please enter the operation (F.e: 2 + 2)
    scanf("%d %c %d", &num1, &operator, &num2); // 10 + 2

    if (operator == '+') {  // operator == '+'
        result = add(num1, num2, result);
    } else if (operator == '-') {  // operator == '-'
        result = subtract(num1, num2, result);
    } else if (operator == '*') {  // operator == '*'
        result = multiply(num1, num2, result);
    } else if (operator == '/') {  // operator == '/'
        result = divide(num1, num2, result);
    }

    printf("Result: %d\n", result);  // Result: 12

    return 0;
}