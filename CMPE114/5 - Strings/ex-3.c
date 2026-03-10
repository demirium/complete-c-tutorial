#include <stdio.h>
#include <string.h>

int main(void) {
    char first_name[20] = "John ";
    char last_name[20] = "Doe";
    char full_name[40] = "";
    
    // You can concatenate strings using strcat
    // It appends the second string to the end of the first string
    strcat(full_name, first_name);
    strcat(full_name, last_name);
    
    printf("Full Name: %s\n", full_name);
    
    return 0;
}
