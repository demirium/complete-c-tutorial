#include <stdio.h>

int main(void) {
    int number;
    /*
        This program prints the multiplication table of a number.
    */
    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i=1;i<=10;i++) {
        printf("%d * %d = %d\n", number, i, number*i); // We print the multiplication table of the number
    }

    /*
        Basically, we use these loops for the code to run multiple times.
        It makes our code more efficient and readable. (and also healthier fingers...)
    */

    return 0;
}
