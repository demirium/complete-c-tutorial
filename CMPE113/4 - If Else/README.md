# If / Else Statements in C Programming

This section introduces conditional statements in C programming.
Conditional statements allow programs to make decisions based on given conditions.

Using `if` and `else`, a program can execute different code blocks depending
on whether a condition is true or false.

---

## 📌 What is an if / else statement?

An `if` statement checks a condition.
If the condition is true, the code inside the `if` block is executed.

If the condition is false, the code inside the `else` block (if provided) is executed.

---

## 🧠 Why is this important?

Without conditional statements, programs would always execute the same code
and would not be able to react to different situations.

`if / else` statements allow programs to:
- make decisions
- compare values
- control program flow

They are a fundamental part of almost every program.

---

## 🧩 Core Concepts in This Section

In this folder, you will learn about:
- `if` statements
- `if / else` statements
- comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- logical conditions
- code blocks and indentation

---

## ✍️ Basic If / Else Example

A simple example of an `if / else` statement:

```c
#include <stdio.h>

int main(void) {
    int age = 18;

    if (age >= 18) {
        printf("You are allowed.\n");
    } else {
        printf("You are not allowed.\n");
    }

    return 0;
}
```

---

## 📰 Explanation

`if (condition)` checks if the condition is true

`{ ... }` defines a code block to be executed if the condition is true

`else` provides an alternative block to execute if the condition is false

`{ ... }` defines the code block for the else case

Curly braces {} define code blocks and improve readability

---

## 🔍 Common Beginner Mistakes

- Using = instead of == for comparison

- Forgetting curly braces for multi-line conditions

- Writing conditions that are always true or always false

- Misunderstanding comparison operators

---

## 🧪 Practice Suggestions

Change the condition and observe different outputs

Add more conditions using different comparison operators

Try removing curly braces and see how behavior changes

Combine input (scanf) with if / else statements

---

## 🪄 Examples

- [ex-1.c](ex-1.c)
- [ex-2.c](ex-2.c)
- [ex-3.c](ex-3.c)

- [Basic-Calculator.c](Basic-Calculator.c)

---

## FAQs: 🤔 Why do we need conditional statements?

Conditional statements allow programs to behave differently
based on the data they process.

They make programs more flexible, logical, and useful.

Without conditions, programs would not be able to make decisions,
which limits what they can do.