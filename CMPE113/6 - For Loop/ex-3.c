#include <stdio.h>

/*
    This program counts the number of even and odd numbers from 1 to 20. And also
    because of the counters, it shows the number of even and odd numbers! Let's examine it!
*/

int main(void) {
    int even_counter=0;
    int odd_counter=0;

    for(int i=1;i<=20;i++) {
        if(i%2==0) { // If the number is even
            printf("%d is even\n", i);
            even_counter++; // We add 1 to the even_counter variable
        }
        else { // If the number is odd
            odd_counter++; // We add 1 to the odd_counter variable
        }
    }

    printf("--> Even counter: %d\n", even_counter);
    printf("--> Odd counter: %d\n", odd_counter);

    return 0;
}