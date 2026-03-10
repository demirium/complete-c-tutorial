# Arrays in C Programming

This section introduces Arrays in C programming.
An array is a collection of variables of the same type that are stored contiguously in memory.

---

## What is an Array?

Instead of declaring many individual variables like `int score1, score2, score3;`, you can declare an array: `int scores[3];`.
Arrays allow you to store multiple values in a single, organized structure, accessible by an index.

---

## Why is this important?

Imagine a classroom with 100 students. Creating 100 separate variables for their grades would be a nightmare!
Arrays allow us to:
- Group related data together
- Easily iterate over data using loops
- Write cleaner and more manageable code

---

## Core Concepts in This Section

In this folder, you will learn about:
- What exactly an array is
- How memory is laid out (contiguous blocks)
- The concept of zero-based indexing (counting starts from `0`, not `1`)

---

## Basic Array Example

```c
#include <stdio.h>

int main(void) {
    // Declare and initialize an array of size 5
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print the first and third elements
    printf("First number: %d\n", numbers[0]);
    printf("Third number: %d\n", numbers[2]);

    return 0;
}
```

---

## Explanation

`int numbers[5]` reserves space for 5 integers in memory.

`{10, 20, 30, 40, 50}` fills those 5 slots with values.

`numbers[0]` accesses the very first element (which is 10). Notice the index is 0!

`numbers[2]` accesses the third element (which is 30).

---

## Common Beginner Mistakes

*Attention please!* As Captain Holt would say: "Zero is a number, treat it with respect." 

- **Off-by-one errors:** Forgetting that if an array has size `5`, the valid indices are `0, 1, 2, 3, 4`. There is NO `numbers[5]`! Accessing it is a common crash reason.
- **Out of bounds access:** C doesn't stop you from accessing memory outside your array. It will just give you garbage data or crash your program.
- **Putting the size wrong:** Confusing the declaration size with the maximum index.

---

## Practice Suggestions

- Create an array and try to print an index that is larger than the arrays size. See what garbage value you get!
- Try initializing an array without a size like `int arr[] = {1, 2, 3};` and use the `sizeof` operator to find its size.

---

## Examples

- [ex-1.c](ex-1.c) - Basic declaration and initialization
- [ex-2.c](ex-2.c) - Manual assignment and modification
- [ex-3.c](ex-3.c) - Finding array size using sizeof

---

## FAQs: Why do arrays start at index 0?

In C, the name of an array points to its true starting position in memory.
The index represents the "offset" or distance from that starting point.
The very first element is exactly at the start, so its distance from the start is `0`! 
