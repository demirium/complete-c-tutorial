#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int side; // We declare our variables
    char ch; // We declare our variables
    printf("Enter the side of the square?"); // We ask our user to enter the side of the square
    scanf("%d",&side); // We get the side of the square from the user with scanf! DONT FORGET THE & (ADDRESS OPERATOR)
    printf("Enter 'P' to print the permieter of the square, \nEnter 'A' to print the area of the square.");
    scanf(" %c",&ch); // We get the character from the user with scanf! DONT FORGET THE & (ADDRESS OPERATOR)
    if(ch=='P') // We check if the character is P
    {
        printf("Periemeter of the square: %d\n",4*side); // We print the perimeter of the square
    }
    else if(ch=='A') // We check if the character is A
    {
        printf("Area of the square: %d\n",side*side); // We print the area of the square
    }
    else // If the character is not P or A
    {
        printf("BEEP BOOP! Please just type P or A."); // We print an error message
    }

    return(0); // We return 0 to the operating system
}