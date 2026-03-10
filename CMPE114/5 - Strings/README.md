# Strings in C Programming

This section introduces Strings.
Unlike other modern languages, C doesn't have a dedicated `String` data type. Instead, strings are just arrays of characters!

---

## What is a String?

A string in C is simply a One-Dimensional Array of `char` (characters) that ends with a special hidden character known as the **null terminator** (`'\0'`).
This standard informs C where exactly the text ends.

---

## Why is this important?

Text operations are fundamental in programming. Whether you ask a user for their name, read sentences from a file, or print messages on screen, you are using strings. Understanding how C handles them internally prevents very common (and very dangerous) bugs!

---

## Core Concepts in This Section

In this folder, you will learn about:
- Declaring and initializing strings (e.g., `char name[] = "Tolga";`)
- The vital importance of the `'\0'` character
- Using `<string.h>` library functions (`strlen`, `strcpy`, `strcmp`)
- Reading string inputs without causing buffer overflows

---

## Basic String Example

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20]; // Array can hold 19 chars + 1 null terminator

    printf("Enter your name: ");
    scanf("%19s", name); // Notice: No '&' needed for strings in scanf!

    printf("Hello %s!\n", name);
    printf("Your name has %d characters.\n", strlen(name));

    return 0;
}
```

---

## Explanation

`char name[20];` creates a character array.
`scanf("%19s", name);` reads a word from the user. We limit it to exactly `19` characters to prevent the user from overflowing our array size of 20 (leaving 1 spot for `'\0'`).
Also notice how there is **no `&`** before `name` in `scanf`! The name of an array by itself acts as an address.
`strlen(name)` counts the letters until it hits `'\0'`.

---

## Common Beginner Mistakes

*Noice. Smatt.* Keep these rules in mind:

- **Comparing strings with `==`:** If you write `if (name1 == name2)`, it DOES NOT check if the texts are the same. It checks if they live in the exact same memory address! You must use `strcmp(name1, name2) == 0`.
- **Forgetting room for the null terminator:** If you want a string to hold "Hello" (5 letters), the array size MUST be at least `6` (`char arr[6];`). If it's 5, there is no room for `'\0'`, and `printf` will read random garbage memory! (*"Title of your compilation error tape."*)
- **Using `=` to assign strings:** You can only use `=` at declaration (`char x[] = "Hello";`). Later in the code, `x = "World";` will cause an error! You must use `strcpy(x, "World");`.

---

## Practice Suggestions

- Write a program that converts a string entirely to UPPERCASE by subtracting 32 from individual characters.
- Try exploring the `strrev()` function, or better, writing your own logic to reverse a string.

---

## Examples

- [ex-1.c](ex-1.c) - Input/Output and strlen
- [ex-2.c](ex-2.c) - String copying and comparison
- [ex-3.c](ex-3.c) - String concatenation
- [ex-4.c](ex-4.c) - Searching in strings (`strchr`, `strstr`)
- [ex-5.c](ex-5.c) - Safely reading strings with spaces (`fgets`)

---

## FAQs: Why does `scanf` stop reading at spaces?

By default, `%s` in `scanf` reads a single "word". Once it hits a space, tab, or newline, it stops! If you want to read a full sentence with spaces, you should look into `fgets(name, 20, stdin);`.
