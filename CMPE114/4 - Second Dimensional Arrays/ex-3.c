#include <stdio.h>

int main(void) {
    int bingo[3][4] = {
        {5, 12, 17, 9},
        {3, 14, 25, 6},
        {18, 2, 8, 21}
    };
    
    int target = 25;
    int found = 0;
    
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            if (bingo[row][col] == target) {
                printf("Target %d found at Row %d, Col %d!\n", target, row, col);
                found = 1;
                // Note: we'd normally use 'break' here, but it only exits the inner loop!
            }
        }
    }
    
    if (!found) {
        printf("Target %d was not found in the matrix.\n", target);
    }
    
    return 0;
}
