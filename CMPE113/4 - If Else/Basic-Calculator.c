#include <stdio.h>
#include <stdlib.h>

/*
    This is our first comprehensive program.
    It is a basic calculator that can perform addition, subtraction, multiplication, and division.
*/

int main(void){
    char op; // We declare our variables
    int num1, num2; // We declare our variables
    printf("Enter an operation character (+, - *, /):"); // We ask our user to enter an operation character
    scanf(" %c",&op); // We get the operation character from the user with scanf! DONT FORGET THE & (ADDRESS OPERATOR)
    printf("Enter two numbers for operation:"); // We ask our user to enter two numbers
    scanf(" %d %d", &num1,&num2); // We get the numbers from the user with scanf! DONT FORGET THE & (ADDRESS OPERATOR)
    if(op=='+') // We check if the operation character is +
    {
        printf("%d%c%d is %d.\n",num1,op,num2,num1*num2);
    }
    else if(op=='-') // We check if the operation character is -
    {
        printf("%d%c%d is %d.\n",num1,op,num2,num1*num2);
    }
    else if(op=='*') // We check if the operation character is *
    {
        printf("%d%c%d is %d.\n",num1,op,num2,num1*num2);
    }
    else if(op=='/') // We check if the operation character is /
    {
        if(num1==0); // We check if the first number is 0
            printf("You can not use 0 at that position!");
        else // If the first number is not 0
            printf("%d%c%d is %d.\n",num1,op,num2,num1/num2);
    }
    else // If the operation character is not +, -, *, /
        printf("STOP HOCAM! There was an error when you tried to complete action.");
    return(0); // We return 0 to the operating system
}