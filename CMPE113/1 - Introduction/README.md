# Introduction to C Programming

This section covers the very basics of the C programming language.
It is designed for students who are encountering C for the first time and want
to understand how a simple C program works.

---

## What is C?

C is a general-purpose programming language that provides low-level access to memory
while still supporting structured programming.

It is widely used in:
- operating systems
- embedded systems
- system-level software
- performance-critical applications

Many modern languages and systems are built on concepts introduced by C.

---

## Why is this important?

Learning C helps you understand:
- how programs are structured
- how code is compiled and executed
- how memory and variables work at a basic level

This knowledge forms a strong foundation for learning other programming languages
such as C++, Java, Python, and many more.

---

## Core Concepts in This Section

In this folder, you will learn about:
- basic program structure
- comments and code readability
- operators and simple expressions
- standard output (`printf`)
- basic syntax rules of C

---

## Basic Program Structure

A minimal C program looks like this:

```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!");
    return 0;
}
```

---

## Explanation

`#include <stdio.h>` allows the use of input/output functions

`main` is the entry point of the program

`printf` prints output to the screen

`return 0` indicates successful program termination

---

## Common Beginner Mistakes

*Title of your compilation tape.* 📼 Oh wait, I mean...

- Forgetting semicolons (;)

- Not including required header files

- Writing code outside the main function

- Confusing comments with executable code

---

## Practice Suggestions

Modify the output message in example programs

Add comments explaining what each line does

Experiment with different operators

Intentionally introduce syntax errors and observe compiler messages

---

## Examples

- [ex-1.c](ex-1.c)
- [ex-2.c](ex-2.c)
- [ex-3.c](ex-3.c)

---

## FAQs: Why do we use comments?

Comments are used to explain *why* the code exists, not just *what* it does.

While the compiler ignores comments, they are extremely important for:
- code readability
- teamwork
- future maintenance

In real-world projects, you will often read code written by others or even by yourself months later.
Comments help you understand the intention behind the code hihihihi :)
