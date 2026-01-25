#include <stdio.h>

int main(void) {
    int number;
    for(number=0;number<=10;number++) {
        printf("%d\n", number);
    }

    for(int othernumber=0;othernumber<3;othernumber++) { // You can define the variable inside the for loop
        printf("%d\n", othernumber);
    }

    return 0;
}