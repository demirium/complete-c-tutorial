#include <stdio.h>

int main(void) {
    int age;
    float gpa;
    char grade;

    printf("Enter your gpa, age and grade: "); // We take multiple inputs from the user
    scanf("%d %f %c", &age, &gpa, &grade); // We scan the inputs in the variables

    printf("You entered: %d %f %c\n", age, gpa, grade); // We print the inputs one by one!

    return 0;
}
