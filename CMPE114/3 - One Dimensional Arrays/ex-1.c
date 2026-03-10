#include <stdio.h>

int main(void) {
    int grades[5];
    
    // Getting input using a loop
    for (int i = 0; i < 5; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }
    
    printf("\nYou entered the following grades:\n");
    // Printing the array using a loop
    for (int i = 0; i < 5; i++) {
        printf("Grade %d: %d\n", i + 1, grades[i]);
    }
    
    return 0;
}
