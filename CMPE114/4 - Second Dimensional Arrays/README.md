# Two Dimensional Arrays in C Programming

This section introduces Two Dimensional (2D) Arrays, essentially "arrays of arrays".
A 2D array allows you to represent tables, grids, and matrices.

---

## What is a Two Dimensional Array?

If a 1D array is like a single row of lockers, a 2D array is like a whole wall of lockers structured in rows and columns.
We declare them using two sets of brackets, like `int matrix[ROWS][COLS];`.

---

## Why is this important?

Many real-world problems exist on a grid:
- Spreadsheets (Excel)
- Chessboards or game maps
- Screen pixels (X and Y coordinates)
- Mathematical matrices

*Terry loves matrices!* 2D arrays give us the tool to easily model these structures in code.

---

## Core Concepts in This Section

In this folder, you will learn about:
- Declaring and initializing 2D matrices
- Using nested `for` loops (a loop inside a loop) to traverse them
- Row-major order (how C stores these rows internally)

---

## Basic 2D Array Example

```c
#include <stdio.h>

int main(void) {
    // A grid with 2 rows and 3 columns
    int grid[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Nested loops to print it
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", grid[row][col]);
        }
        printf("\n"); // Newline at the end of each row
    }

    return 0;
}
```

---

## Explanation

`int grid[2][3]` creates an array with 2 rows and 3 columns.
First index is ALWAYS the row, second index is ALWAYS the column. Think RC (Row, Column).

The outer `for` loop iterates through the rows (`row = 0`, then `row = 1`).
The inner `for` loop iterates through the columns of the current row (`col = 0`, `1`, `2`).
So we visit `grid[0][0]`, `[0][1]`, `[0][2]`, and then drop to the next row: `[1][0]`, `[1][1]`, `[1][2]`.

---

## Common Beginner Mistakes

- **Confusing Row/Column order:** It's always `[row][column]`. Mixing them up when looping leads to reading garbage data or crashing.
- **Incorrect nesting of loops:** Putting the column loop on the outside and row on the inside accidentally prints the grid "sideways" (transposed).
- **Missing the `\n`:** Forgetting to print a newline character after the inner loop finishes means the whole grid prints on one single long line.

---

## Practice Suggestions

- Create a 3x3 2D array to represent a Tic-Tac-Toe board using a `char` array!
- Write code to add two 2x2 matrices together and store the result in a third matrix.

---

## Examples

- [ex-1.c](ex-1.c) - Printing a grid layout
- [ex-2.c](ex-2.c) - Matrix addition
- [ex-3.c](ex-3.c) - Searching inside a 2D array

---

## FAQs: Are there 3D Arrays?

Yes! You can have `int cube[3][3][3];`. It acts like a Rubik's cube. You can theoretically have as many dimensions as you want (`[A][B][C][D]...`), but beyond 3D it becomes very difficult for the human brain to visualize.

---

## ❗Important

Please ensure that you clearly understand how memory and indexing work in two dimensional arrays. The visualization below will help you grasp the row-major order and how coordinate pairs map to memory cells. For the understand easily, you can examine the following image which created with Google Gemini AI from me.

![Second Dimensional Arrays Concept Diagram](second-dimensional-arrays-concept.png)
