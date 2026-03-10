#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100] = "The quick brown fox jumps over the lazy dog";
    char *char_ptr;
    char *word_ptr;

    printf("Original sentence: %s\n", sentence);

    // 1. Searching for a single character using strchr
    char search_char = 'f';
    char_ptr = strchr(sentence, search_char);
    
    if (char_ptr != NULL) {
        printf("Found character '%c'. The rest of the string is: %s\n", search_char, char_ptr);
    } else {
        printf("Character '%c' not found.\n", search_char);
    }

    // 2. Searching for a word (substring) using strstr
    char search_word[] = "fox";
    word_ptr = strstr(sentence, search_word);
    
    if (word_ptr != NULL) {
        printf("Found word \"%s\". The rest of the string is: %s\n", search_word, word_ptr);
    } else {
        printf("Word \"%s\" not found.\n", search_word);
    }

    return 0;
}
