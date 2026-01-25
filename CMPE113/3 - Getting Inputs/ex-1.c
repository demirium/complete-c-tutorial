#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: "); // We ask our user to enter their age
    scanf("%d", &age); // We get the age from the user with scanf! DONT FORGET THE & (ADDRESS OPERATOR)

    printf("You entered: %d\n", age); // We print the age

    // Easy, right?

    return 0;
}
