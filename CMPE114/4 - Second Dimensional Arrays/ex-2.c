#include <stdio.h>

int main(void) {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    
    printf("Sum of the two matrices:\n");
    
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            // Addition of matrices element by element
            result[row][col] = matrix1[row][col] + matrix2[row][col];
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}
