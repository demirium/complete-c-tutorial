# Getting Inputs in C Programming

This section introduces how to get input from the user in C programming.
User input allows programs to interact with users and work with dynamic data
instead of fixed values.

---

## 📌 What is user input?

User input refers to data that is entered into the program while it is running.

In C, user input is commonly taken from the keyboard using standard input functions,
most notably `scanf`.

---

## 🧠 Why is this important?

Without user input, programs can only work with predefined values.

Getting input from the user allows programs to:
- work with real-time data
- respond to different user actions
- become more flexible and interactive

Almost all real-world programs require some form of user input.

---

## 🧩 Core Concepts in This Section

In this folder, you will learn about:
- the `scanf` function
- reading different data types (`int`, `float`, `char`)
- placeholders used for input
- passing variable addresses using `&`
- basic input-related mistakes

---

## ✍️ Basic Input Example

A simple example of getting input from the user:

```c
#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You entered: %d\n", age);

    return 0;
}
```

---

## 📰 Explanation

`scanf` reads input from the standard input (keyboard)

`%d` is a placeholder that specifies the expected data type

`&age` passes the address of the variable where the input will be stored

`scanf` requires variable addresses to modify their values

---

## 🔍 Common Beginner Mistakes

- Forgetting to use the address operator (&)

- Using the wrong placeholder for a variable type

- Not checking whether scanf successfully read the input

- Mixing input and output placeholders

- Leaving extra characters in the input buffer

---

## 🧪 Practice Suggestions

Get input for different data types (int, float, char)

Ask the user for multiple values in a single scanf

Print the received input back to the screen

Intentionally remove & and observe compiler errors

---

## 🪄 Examples

- [ex-1.c](ex-1.c)
- [ex-2.c](ex-2.c)

---

## FAQs: 🤔 Why do we use & with scanf?

The & operator is used to pass the memory address of a variable to scanf.

Since scanf needs to store input values into variables,
it must know where in memory to write those values.

Without passing the address, scanf cannot modify the variable,
which leads to incorrect behavior or runtime errors.

Understanding this concept is a crucial step toward learning pointers.