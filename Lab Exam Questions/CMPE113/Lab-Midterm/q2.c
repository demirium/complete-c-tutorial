#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    float totalShoppingAmount;
    char memberShipType;
    float discount, shipping;
    float finalAmount;
    int shipB=120;
    int shipS=100;
    int shipG=0;
    int shipN=140;
    int otherMemberDiscount = 0;
    printf("Enter your total shopping amount: ");
    scanf("%f", &totalShoppingAmount);
    printf("Enter your membership type (B/b for bronze, S/s for silver, G/g for gold):");
    scanf(" %c", &memberShipType);
    if (memberShipType=='B' || memberShipType=='b') {
        discount = totalShoppingAmount*0.05;
        finalAmount = (totalShoppingAmount+shipB)-discount;
        printf("The discount is: %.2fTL\n", discount);
        printf("The shipping cost is: %.2fTL\n", shipB);
        printf("The total payment is: %.2fTL\n", finalAmount);
    }
    else if (memberShipType=='S' || memberShipType=='s') {
        discount = totalShoppingAmount*0.1;
        finalAmount = (totalShoppingAmount+shipS)-discount;
        printf("The discount is: %.2fTL\n", discount);
        printf("The shipping cost is: %.2fTL\n", shipS);
        printf("The total payment is: %.2fTL\n", finalAmount);
    }
    else if (memberShipType=='G' || memberShipType=='g') {
        discount = totalShoppingAmount*0.15;
        finalAmount = (totalShoppingAmount+shipG)-discount;
        printf("The discount is: %.2fTL\n", discount);
        printf("The shipping cost is: %.2fTL\n", shipG);
        printf("The total payment is: %.2fTL\n", finalAmount);
    }
    else {
        printf("Invalid membership type entered.\n");
        printf("The discount is: %.2fTL\n", otherMemberDiscount);
        printf("The shipping cost is: %.2fTL\n", shipN);
        printf("The total payment is: %.2fTL", totalShoppingAmount+shipN);
    }
    return 0;
}