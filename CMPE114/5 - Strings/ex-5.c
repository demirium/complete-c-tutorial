#include <stdio.h>
#include <string.h>

int main(void) {
    char full_name[50];
    
    printf("Please enter your full name (with spaces): ");
    
    // fgets is much safer than scanf("%s") because it reads spaces!
    // It takes 3 arguments: the array, the max size, and where to read from (stdin = keyboard)
    fgets(full_name, sizeof(full_name), stdin);
    
    // fgets also captures the newline character '\n' when you press enter.
    // Let's remove it if it's there:
    int length = strlen(full_name);
    if (length > 0 && full_name[length - 1] == '\n') {
        full_name[length - 1] = '\0';
    }
    
    printf("Wow, nice to meet you, %s!\n", full_name);
    
    return 0;
}
