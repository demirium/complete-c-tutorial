#include <stdio.h>
#include <string.h>

struct Car {
    char brand[50];
    char model[50];
    int year;
};

int main(void) {
    struct Car myCar1;
    
    // Using strcpy for strings!
    strcpy(myCar1.brand, "Toyota");
    strcpy(myCar1.model, "Corolla");
    myCar1.year = 2022;
    
    printf("Car 1: %s %s, Year: %d\n", myCar1.brand, myCar1.model, myCar1.year);
    
    return 0;
}
