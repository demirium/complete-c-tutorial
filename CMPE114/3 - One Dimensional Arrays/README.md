# One Dimensional Arrays in C Programming

This section focuses on One Dimensional (1D) Arrays in C programming.
It builds on the base array concept, highlighting how to manipulate and loop through these lists.

---

## What is a One Dimensional Array?

A 1D array is simply a list of items. It is the most common and fundamental type of array. Think of it like a single row of lockers side-by-side, each with its own number (index).

---

## Why is this important?

1D Arrays are practically everywhere. Whenever you need a list of test scores, temperatures, or simple data points, a 1D array is your best friend. Combined with loops, they are the bread and butter of data processing.

---

## Core Concepts in This Section

In this folder, you will learn about:
- Declaring and initializing 1D arrays
- Traversing arrays using `for` loops
- Reading array inputs from the user (`scanf`)
- Summing, finding the minimum, and maximum elements in an array

---

## Basic 1D Array Example

```c
#include <stdio.h>

int main(void) {
    int grades[5];
    int sum = 0;

    // Get input for 5 grades
    for (int i = 0; i < 5; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    // Calculate sum
    for (int i = 0; i < 5; i++) {
        sum += grades[i];
    }

    printf("Total sum of grades: %d\n", sum);

    return 0;
}
```

---

## Explanation

`int grades[5];` declares an array to hold 5 integers, currently containing garbage values.

The first `for` loop goes from `i = 0` to `i = 4`. Inside the loop, `&grades[i]` is used with `scanf` to store user input directly into each slot.

The second `for` loop goes through the array again, adding each element's value to the `sum` variable.

---

## Common Beginner Mistakes

*Cool, cool, cool, cool, cool. No doubt, no doubt, no doubt.* Let's avoid these basic mistakes:

- **Forgetting the `&` in `scanf`:** When using `scanf` with an array element, you still must use the `&` symbol (easiest way to crash is writing `scanf("%d", grades[i]);` instead of `&grades[i]`).
- **Loop boundary bug:** Writing `for (int i = 0; i <= 5; i++)`. Notice the `<=` instead of `<`. This will try to access the 6th element at index 5, which doesn't exist!

---

## Practice Suggestions

- Write a program to find the highest number in a given array of 10 integers.
- Try reversing the items in an array (printing them from the last index to the first index `0`).

---

## Examples

- [ex-1.c](ex-1.c) - Reading inputs and printing arrays
- [ex-2.c](ex-2.c) - Calculating sum and average
- [ex-3.c](ex-3.c) - Finding the maximum element

---

## FAQs: Can I change the size of an array later?

No. Standard arrays in C are of a **fixed size**. Once you declare `int arr[10];`, it will hold exactly 10 integers until the program ends. If you ever need more space, you either have to declare a bigger array initially or learn about dynamic memory allocation (`malloc`), which comes much later!
