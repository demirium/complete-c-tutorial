#include <stdio.h>

int main(void) {
    char grade;

    printf("Please enter your letter grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'A':
        case 'a': 
            printf("Excellent!");
            break;
        case 'B':
        case 'b':
            printf("Good!");
            break;
        case 'C':
        case 'c':
            printf("Average!");
            break;
        case 'D':
        case 'd':
            printf("Below Average!");
            break;
        case 'F':
        case 'f':
            printf("Fail!");
            break;
        default:
            printf("Invalid grade!");
            break;
    }

    /* 
        As you can see we write: 
        case 'A':
        case 'a': 

        This means that if the user enters 'A' or 'a' (Whether it is uppercase or lowercase)
        the code can understand and read it as the same input. We don't need to write again
        and again cases for each of them.
    */

    return 0;
}