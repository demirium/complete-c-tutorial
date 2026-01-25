# Switch Case Statement in C Programming

This section introduces the switch-case statement in C programming.
The switch-case structure provides an efficient way to handle multiple conditions
based on the value of a single variable or expression.

It is an alternative to using multiple `if / else if` statements
and often results in cleaner, more readable code.

---

## 📌 What is a switch-case statement?

A `switch` statement evaluates an expression and compares its value
against multiple `case` labels.

When a matching `case` is found, the code associated with that case is executed.

If no match is found, an optional `default` block can be executed.

---

## 🧠 Why is this important?

Switch-case statements are particularly useful when:
- you need to compare a single variable against multiple values
- you want cleaner code than nested if-else chains
- you need better readability for menu-driven programs

They make programs easier to understand and maintain when dealing
with multiple discrete options.

---

## 🧩 Core Concepts in This Section

In this folder, you will learn about:
- `switch` keyword
- `case` labels
- `break` statement
- `default` case
- when to use switch vs if-else
- limitations of switch statements

---

## ✍️ Basic Switch-Case Example

A simple example of a switch-case statement:

```c
#include <stdio.h>

int main(void) {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday - Pazartesi\n");
            break;
        case 2:
            printf("Tuesday - Sali\n");
            break;
        case 3:
            printf("Wednesday - Carsamba\n");
            break;
        case 4:
            printf("Thursday - Persembe\n");
            break;
        case 5:
            printf("Friday - Cuma\n");
            break;
        default:
            printf("Weekend - Haftasonu\n");
    }

    return 0;
}
```

---

## 📰 Explanation

`switch (expression)` evaluates the expression once

`case value:` defines a label to match against the expression

`break;` stops execution and exits the switch block

`default:` (optional) executes if no case matches

Without `break`, execution "falls through" to the next case

---

## 🔍 Common Beginner Mistakes

- Forgetting the `break` statement (causes fall-through)

- Using non-integer types (switch only works with int, char)

- Forgetting the `default` case when it's needed

- Using variables instead of constants in case labels

- Placing code before the first case label

---

## 🧪 Practice Suggestions

Add more cases and observe the behavior

Remove a break statement and see what happens

Try using char instead of int in the switch expression

Create a simple menu-driven calculator program

Combine user input (scanf) with switch-case

---

## 🪄 Examples

- [ex-1.c](ex-1.c)
- [ex-2.c](ex-2.c)
- [ex-3.c](ex-3.c)

- [Menu-Driven-Calculator.c](Menu-Driven-Calculator.c)

---

## FAQs: 🤔 When should I use switch instead of if-else?

Use `switch` when you are comparing a single variable
against multiple specific, constant values.

Use `if / else` when:
- you need to compare ranges (e.g., age > 18)
- you need complex conditions with logical operators
- you are working with floating-point numbers

Switch statements are faster and more readable for multiple
discrete value comparisons, but they are limited to
integer and character types.
