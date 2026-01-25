# For Loop in C Programming

This section introduces the `for` loop in C programming.
Loops allow programs to execute the same block of code multiple times
without having to write the same code repeatedly.

The `for` loop is one of the most commonly used loop structures
and is particularly useful when you know how many times you want to repeat something.

---

## 📌 What is a for loop?

A `for` loop is a control structure that repeats a block of code
a specific number of times.

It consists of three main parts:
- **initialization**: sets the starting point
- **condition**: determines when to stop
- **increment/decrement**: updates the loop variable after each iteration

---

## 🧠 Why is this important?

Without loops, you would need to write the same code over and over again
to perform repetitive tasks.

For loops allow programs to:
- process large amounts of data efficiently
- automate repetitive operations
- iterate through sequences and arrays
- reduce code duplication

They are essential for writing efficient and maintainable programs.

---

## 🧩 Core Concepts in This Section

In this folder, you will learn about:
- `for` loop syntax
- loop initialization, condition, and increment
- loop variable scope
- nested for loops
- common loop patterns
- when to use for vs while loops

---

## ✍️ Basic For Loop Example

A simple example of a for loop:

```c
#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Iteration: %d\n", i);
    }

    return 0;
}
```

Output:
```
Iteration: 1
Iteration: 2
Iteration: 3
Iteration: 4
Iteration: 5
```

---

## 📰 Explanation

`for (initialization; condition; increment)` defines the loop structure

`i = 1` sets the starting value (initialization)

`i <= 5` checks if the loop should continue (condition)

`i++` increases the value of i by 1 after each iteration (increment)

The loop body `{ ... }` contains the code to be repeated

---

## 🔍 Common Beginner Mistakes

- Using `=` instead of `==` in the condition

- Forgetting to increment the loop variable (infinite loop)

- Off-by-one errors (starting from 0 vs 1)

- Modifying the loop variable inside the loop incorrectly

- Using semicolon after the for statement `for(...);` which creates an empty loop

---

## 🧪 Practice Suggestions

Change the starting and ending values of the loop

Try counting backwards (decrement instead of increment)

Print the multiplication table of a number

Calculate the sum of numbers from 1 to 10

Combine for loops with if statements

---

## 🪄 Examples

- [ex-1.c](ex-1.c)
- [ex-2.c](ex-2.c)
- [ex-3.c](ex-3.c)

- [Multiplication-Table.c](Multiplication-Table.c)

---

## FAQs: 🤔 What's the difference between for and while loops?

A `for` loop is best when you know **exactly how many times**
you want to repeat something.

A `while` loop is better when you want to repeat **until a condition changes**
but you don't know how many iterations it will take.

For example:
- Use `for` to print numbers 1 to 100
- Use `while` to keep asking for input until user enters "quit"

Both loops can often accomplish the same task,
but choosing the right one makes your code more readable and clear.
