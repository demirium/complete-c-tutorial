#include <stdio.h>
#include <string.h>

int main(void) {
    char greeting[50] = "Hello, welcome to C programming!";
    char user_name[20];
    
    printf("%s\n", greeting);
    
    printf("Please enter your name: ");
    // scanf reads until the first space
    scanf("%19s", user_name);
    
    printf("Nice to meet you, %s!\n", user_name);
    printf("Your name has %lu characters.\n", strlen(user_name));
    
    return 0;
}
