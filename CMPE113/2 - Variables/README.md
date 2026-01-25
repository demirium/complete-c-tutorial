# Variables in C Programming

This section introduces variables in C programming.
Variables are used to store data that can be accessed and modified during program execution.

Understanding variables is essential, as almost every program relies on them.

---

## 📌 What is a variable?

A variable is a named memory location used to store a value.

Each variable in C has:
- a **data type**
- a **name**
- a **value**

The data type determines how much memory is allocated and how the value is interpreted.

---

## 🧠 Why is this important?

Variables allow programs to:
- store information
- perform calculations
- make decisions based on data

Without variables, programs would not be able to handle dynamic or changing information.

Learning how variables work also helps you understand how memory is used internally.

---

## 🧩 Core Concepts in This Section

In this folder, you will learn about:
- variable declaration
- variable initialization
- basic data types (`int`, `float`, `char`, `double`)
- assigning and updating values
- naming rules for variables

---

## 📎 What is a placeholder?

A placeholder is a special symbol used in output functions like `printf`
to indicate **where and how a variable’s value should be displayed**.

In C, placeholders start with the `%` character and are used inside string literals.

Each placeholder corresponds to a specific data type.

---

## ✍️ Basic Placeholder Usage

```c
int age = 20;
float height = 1.75;
char grade = 'A';

printf("Age: %d\n", age);
printf("Height: %.2f\n", height);
printf("Grade: %c\n", grade);
```

- Explanation

`%d` is used for integers (int)

`%f` is used for floating-point numbers (float)

`%c` is used for characters (char)

The order of placeholders must match the order of variables passed to printf.

---

## 🔍 Common Placeholder Mistakes

- Using %d for a float

- Using %f for an int

- Forgetting to provide a variable for a placeholder

- Mismatching the number of placeholders and variables

---

## 🤔 Why are placeholders necessary?

- Placeholders allow printf to:

  - format output correctly

  - interpret data types safely

  - print multiple variables in a single line

- Without placeholders, printf would not know:

  - what type the variable is

  - how many bytes to read from memory

!Understanding placeholders is essential for avoiding runtime errors
and writing correct output statements!

---

## ✍️ Basic Variable Usage

Now you know what a placeholder is! Then, Let's see a simple example of variable usage:

```c
#include <stdio.h>

int main(void) {
    int age = 20;
    float height = 1.75;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

---

## 📰 Explanation

`int age = 20;` declares an integer variable and assigns a value

`float height = 1.75;` declares a floating-point variable

`char grade = 'A';` declares a character variable (single quotes are required)

`printf` is used to display variable values using format specifiers

---

## 🔍 Common Beginner Mistakes

- Using a variable without initializing it

- Choosing the wrong data type

- Forgetting to declare a variable before using it

- Using incorrect format specifiers in printf

- Confusing single quotes ('A') with double quotes ("A")

---

## 🪄 Examples

- [ex-1.c](ex-1.c)
- [ex-2.c](ex-2.c)
- [ex-3.c](ex-3.c)
- [ex-4.c](ex-4.c)
- [ex-5.c](ex-5.c)