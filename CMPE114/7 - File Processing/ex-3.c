#include <stdio.h>

int main(void) {
    // Open file in append ("a" mode) to add text without deleting old text
    FILE *file = fopen("greetings.txt", "a");
    
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    
    // Writing a new line at the end
    fprintf(file, "This line was appended later!\n");
    
    fclose(file);
    
    printf("Successfully appended a new line to the file.\n");
    
    return 0;
}
