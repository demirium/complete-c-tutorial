#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    Date birthday; // A struct inside another struct!
} Person;

int main(void) {
    Person p1;
    
    strcpy(p1.name, "Terry");
    
    // Accessing the nested struct requires chaining dots
    p1.birthday.day = 15;
    p1.birthday.month = 8;
    p1.birthday.year = 1978;
    
    printf("%s's birthday is: %02d/%02d/%d\n", p1.name, p1.birthday.day, p1.birthday.month, p1.birthday.year);
    
    return 0;
}
