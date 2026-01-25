#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int d1, m1, y1, h1, min1;
    int d2, m2, y2, h2, min2;
    float avg1 = 53.5582;
    float avg2 = 36.4211;
    printf("Enter date and time 1 (day month year hour minute): ");
    scanf("%d %d %d %d %d", &d1, &m1, &y1, &h1, &min1);
    printf("Enter date and time 2 (day month year hour minute): ");
    scanf("%d %d %d %d %d", &d2, &m2, &y2, &h2, &min2);
    printf("Exam 1\n");
    printf("Date: %2d/%2d/%4d\n", d1, m1, y1);
    printf("Time: %8d:%d\n", h1, min1);
    printf("Average: %7.3lf\n\n", avg1);    
    printf("Exam 2\n");
    printf("Date and Time:\n");
    printf("%2d/%2d/%4d %8d:%d\n", d2, m2, y2, h2, min2);
    printf("Average: %5.1lf", avg2);
    return 0;
}
