#include <stdio.h>

int main(void) {
    int lecture = 3;
    float total_akts = 15.5;
    char grade = 'A';
    printf("Lecture: %d\n", lecture);
    printf("Total AKTS: %f\n", total_akts);
    printf("Grade: %c\n", grade);

    /*
    Or you can make it in one printf function:

    printf("Lecture: %d\nTotal AKTS: %f\nGrade: %c\n", lecture, total_akts, grade);

    */
    return 0;
}