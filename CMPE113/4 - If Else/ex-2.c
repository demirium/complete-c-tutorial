#include <stdio.h>

int main(void) {
    int score;

    printf("Enter your exam score: ");
    scanf("%d", &score);

    if (score >= 90) { // We check if the score is greater than or equal to 90
        printf("Your grade is A.\n");
    } else if (score >= 80) { // We check if the score is greater than or equal to 80
        printf("Your grade is B.\n");
    } else if (score >= 70) { // We check if the score is greater than or equal to 70
        printf("Your grade is C.\n");
    } else if (score >= 60) { // We check if the score is greater than or equal to 60
        printf("Your grade is D.\n");
    } else { // If the score is less than 60
        printf("Your grade is F.\n");
    }

    return 0;
}
