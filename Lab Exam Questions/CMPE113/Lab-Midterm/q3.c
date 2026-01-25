#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    int charType, xp, critHit;
    float power, plusCrit;
    printf("Enter chracter type (1.: Warrior, 2: Mage): ");
    scanf("%d", &charType);
    printf("Enter XP (experience points): ");
    scanf("%d", &xp);
    printf("How many critical hits occured? (0 or more): ");
    scanf("%d", &critHit);
    if(charType==1) {
        if(xp<1000 && xp>0) 
            power = xp*0.8;
        else if(xp>=1000)
            power = pow(xp,0.9);
        else {
            printf("Error occured. Please enter positive integer value.");
            return 0;
        }
    }
    else if(charType==2) {
        if(xp<1000 && xp>0) 
            power = xp*1.2;
        else if(xp>=1000)
            power = pow(xp,1.05);
        else {
            printf("Error occured. Please enter positive integer value.");
        }
    }
    else {
        printf("Please enter valid character type.");
        return 0;
    }
    
    plusCrit = pow(1.25,critHit);
    power = power*plusCrit;
    if(power>5000) {
        printf("Attack power: %.3lf\n", power);
        printf("Congratulations! You leveled up.");
    }
    else
        printf("Attack power: %.3lf\n", power);
    return 0;
}