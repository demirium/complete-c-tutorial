#include <stdio.h>

/*
    This program calculates the sum of numbers from 0 to the number entered by the user.
*/  

int main(void) {
    int number, total=0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i=0;i<number;i++) { // i++ is the same as i=i+1 | i-- is the same as i=i-1 as you know
        total = total + i;  // We add the current total value to the current i value and define our new current total value
    }

    printf("The sum of numbers from 0 to %d is %d", number, total);

    return 0;
}