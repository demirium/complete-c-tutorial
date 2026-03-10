#include <stdio.h>

int main(void) {
    // Open the file we created in the previous example for reading ("r" mode)
    FILE *file = fopen("greetings.txt", "r");
    char word[50];
    
    if (file == NULL) {
        printf("Error: Could not open file. Did you run ex-1.c first?\n");
        return 1;
    }
    
    printf("Reading file contents word by word:\n");
    
    // fscanf reads word by word until it reaches the End Of File (EOF)
    while (fscanf(file, "%49s", word) != EOF) {
        printf("%s\n", word);
    }
    
    fclose(file);
    
    return 0;
}
