#include <stdio.h>

/*
    Let's solve another scenario. But we will improve our previous example and combine it with
    if-else statements! What a day, huh?

    Then, our program should need to take average from the user, then it should categorize
    the letter grade based on the average.

    And our table is:
        - A: >= 90
        - B: >= 80
        - C: >= 70
        - D: >= 60
        - F: < 60

    Let's get started!
*/

int main(void) {
    char grade;
    int average;

    printf("Please enter your average: ");
    scanf("%d", &average);

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    switch (grade) {
        case 'A':
            printf("LETTER GRADE: A | LETTER COMMENT: Excellent!"); // like YOU MY DEAR LEARNER haha :^)
            break;
        case 'B':
            printf("LETTER GRADE: B | LETTER COMMENT: Good!");
            break;
        case 'C':
            printf("LETTER GRADE: C | LETTER COMMENT: Average!");
            break;
        case 'D':
            printf("LETTER GRADE: D | LETTER COMMENT: Below Average!");
            break;
        case 'F':
            printf("LETTER GRADE: F | LETTER COMMENT: Fail!");
            break;
        default:
            printf("Invalid grade!");
            break;
    }

    return 0;
}