#include <stdio.h>
#include <string.h>

int main(void) {
    char string1[20] = "Apple";
    char string2[20];
    char user_input[20];
    
    // Copy string1 into string2
    strcpy(string2, string1);
    printf("string2 now contains: %s\n", string2);
    
    // String comparison
    printf("Guess the fruit: ");
    scanf("%19s", user_input);
    
    // strcmp returns 0 if they are exactly identical
    if (strcmp(user_input, string1) == 0) {
        printf("Correct! They match exactly.\n");
    } else {
        printf("Wrong guess! You typed '%s' instead of '%s'.\n", user_input, string1);
    }
    
    return 0;
}
