#include <stdio.h>

int main(void) {
    // A 3x3 matrix layout
    int matrix[3][3] = {
        {11, 12, 13},
        {21, 22, 23},
        {31, 32, 33}
    };
    
    printf("Printing the 3x3 Matrix:\n");
    
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            // %-3d adds spacing for neat formatting
            printf("%-3d ", matrix[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}
