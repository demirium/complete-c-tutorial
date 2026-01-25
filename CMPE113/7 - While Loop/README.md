# While Loop in C Programming

This section introduces the `while` loop in C programming.
Like the `for` loop, the `while` loop allows programs to repeat code multiple times,
but it is better suited for situations where the number of iterations is not known in advance.

The `while` loop continues executing as long as its condition remains true. Well, well, well!

---

## 📌 What is a while loop?

A `while` loop is a control structure that repeats a block of code
as long as a given condition is true.

Unlike the `for` loop, the `while` loop only has a condition.
The initialization and increment must be handled separately.

---

## 🧠 Why is this important?

While loops are essential when:
- you don't know how many iterations you need
- you want to repeat until a specific condition changes
- you need user input validation (repeat until valid)
- you're reading data until end-of-file or specific value

They provide more flexibility than `for` loops in certain situations
and are fundamental to writing interactive programs.

---

## 🧩 Core Concepts in This Section

In this folder, you will learn about:
- `while` loop syntax
- loop conditions and boolean expressions
- infinite loops and how to avoid them
- break and continue statements
- input validation using while loops
- the difference between while and for loops

---

## ✍️ Basic While Loop Example

A simple example of a while loop:

```c
#include <stdio.h>

int main(void) {
    int count = 1;

    while (count <= 5) {
        printf("Count: %d\n", count);
        count++;
    }

    return 0;
}
```

Output:
```
Count: 1
Count: 2
Count: 3
Count: 4
Count: 5
```

---

## 📰 Explanation

`while (condition)` checks if the condition is true before each iteration

`count = 1` initialization happens before the loop

`count++` increment must be done inside the loop body

The loop continues as long as the condition is true

If the condition is false from the start, the loop never executes

---

## 🔍 Common Beginner Mistakes

- Forgetting to update the loop variable (infinite loop)

- Using `=` instead of `==` in the condition

- Not initializing the loop variable before the loop

- Placing the increment in the wrong location

- Creating conditions that are always true or always false

---

## 🧪 Practice Suggestions

Create a countdown program (10 to 1)

Keep asking for input until user enters a specific value

Validate user input (e.g., positive numbers only)

Create a simple guessing game with while loop

Compare the same task written with for and while loops

---

## 🪄 Examples

- [ex-1.c](ex-1.c)
- [ex-2.c](ex-2.c)
- [ex-3.c](ex-3.c)

- [Number-Guessing-Game.c](Number-Guessing-Game.c)

---

## FAQs: 🤔 When should I use while instead of for?

Use `while` when:
- you don't know how many times to repeat in advance
- you're waiting for a specific condition to change
- you're validating user input
- you're reading data until a sentinel value

Use `for` when:
- you know exactly how many iterations you need
- you're counting through a range of numbers
- you're iterating through arrays

Example of when `while` is better:
```c
// Keep asking until valid input
int age;
printf("Enter age (1-120): ");
scanf("%d", &age);

while (age < 1 || age > 120) {
    printf("Invalid! Enter again: ");
    scanf("%d", &age);
}
```

This would be awkward with a `for` loop!
