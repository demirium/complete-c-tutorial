#include <stdio.h>

/* 
    Well, yes we will examine some examples with some specific scenarios after that!
    But first, let's start with a simple example.

    Let's assume that we are talking about a restaurants permission system.
    There are 3 different permission numbers, which are:
        - 1: You can get orders from the kitchen.
        - 2: You can get orders from the kitchen and serve the customers.
        - 3: You can get orders from the kitchen, serve the customers and you can get the money from the customers.
*/

int main(void) {
    int permission_num;
    
    printf("Enter your permission number: ");
    scanf("%d", &permission_num); // We get the permission number from the user.

    switch (permission_num) {
        case 1:
            printf("You can get orders from the kitchen.\n");
            break;
        case 2:
            printf("You can get orders from the kitchen and serve the customers.\n");
            break;
        case 3:
            printf("You can get orders from the kitchen, serve the customers and you can get the money from customers.\n");
            break;
        default:
            printf("Your permission number is invalid. Please try again.");
            return 1;
            break;
    }

    return 0;
}
