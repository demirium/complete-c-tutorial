# Standard Library Basics (stdlib.h) in C Programming

This section introduces basic functions from the `stdlib.h` library.
The standard library provides essential utility functions for tasks like
random number generation, program control, and type conversions.

Like math.h, these are pre-built functions that save you time and effort!

---

## What is stdlib.h?

`stdlib.h` is one of C's most important standard libraries.
It provides general-purpose utility functions that don't fit into
more specialized libraries.

It includes functions for:
- random number generation
- program termination and control
- integer absolute values
- memory management (advanced - not covered here)
- string to number conversions

---

## Why is this important?

Many common programming tasks require these utility functions.

Using `stdlib.h` is important because:
- **Random numbers**: essential for games, simulations, and testing
- **Program control**: allows clean program exits with status codes
- **Type safety**: provides reliable conversion and calculation functions
- **Standard approach**: these are the industry-standard ways to handle these tasks

You could write your own random number generator, but stdlib's version
is well-tested and sufficient for most purposes!

---

## Core Concepts in This Section

In this folder, you will learn about:
- random number generation with `rand()` and `srand()`
- seeding random numbers with `time()`
- absolute value with `abs()`
- program termination with `exit()`
- generating random numbers in specific ranges

---

## 📋 Common stdlib.h Functions (Basics)

Here are the basic functions from stdlib.h covered in this section:

| Function | Description | Example | Notes |
|----------|-------------|---------|-------|
| `rand()` | Generate random number | `rand()` | Returns 0 to RAND_MAX |
| `srand(seed)` | Set random seed | `srand(time(0))` | Call once at program start |
| `abs(x)` | Absolute value (int) | `abs(-5)` | Returns 5 |
| `exit(code)` | Exit program | `exit(0)` | 0 = success, non-zero = error |

**Note:** For random numbers, you need to include `#include <time.h>` to use `time(0)` for seeding.

You can find more information here: https://www.w3schools.com/c/c_ref_stdlib.php

---

## Basic Random Number Example

A simple example generating random numbers:

```c
#include <stdio.h>
#include <stdlib.h>  // Required for rand() and srand()
#include <time.h>    // Required for time()

int main(void) {
    // Seed the random number generator
    srand(time(0));  // Use current time as seed
    
    // Generate random numbers
    printf("Random number 1: %d\n", rand());
    printf("Random number 2: %d\n", rand());
    printf("Random number 3: %d\n", rand());
    
    // Generate a random number between 1 and 100
    int random_1_to_100 = (rand() % 100) + 1;
    printf("Random (1-100): %d\n", random_1_to_100);
    
    // Generate a random number between 1 and 6 (dice)
    int dice = (rand() % 6) + 1;
    printf("Dice roll: %d\n", dice);
    
    return 0;
}
```

---

## Explanation

`#include <stdlib.h>` gives access to stdlib functions

`#include <time.h>` needed for `time()` function

`srand(time(0))` seeds the random generator with current time

`rand()` returns a random number between 0 and RAND_MAX

`rand() % N` gives a random number between 0 and N-1

`(rand() % N) + 1` gives a random number between 1 and N

Call `srand()` only ONCE at the start of your program!

---

## 🎲 Understanding Random Number Ranges

Generating random numbers in specific ranges is very common:

```c
// Random number between 0 and 99
int num = rand() % 100;

// Random number between 1 and 100
int num = (rand() % 100) + 1;

// Random number between min and max (inclusive)
int num = (rand() % (max - min + 1)) + min;

// Example: Random between 10 and 20
int num = (rand() % (20 - 10 + 1)) + 10;  // or: (rand() % 11) + 10
```

---

## Common Beginner Mistakes

*Yippie kay yay, other buckets!* 🤠 Boyle says to avoid these:

- Forgetting to include `#include <stdlib.h>`

- Not calling `srand()` (same random numbers every run!)

- Calling `srand()` multiple times (disrupts randomness)

- Wrong formula for random ranges (off-by-one errors)

- Using `rand()` for cryptography (it's not secure!)

---

## Practice Suggestions

Create a dice rolling simulator (1-6)

Make a coin flip program (heads/tails)

Build a lottery number generator

Create a simple guessing game with random target

Generate random math quiz questions

---

## Examples

- [Dice-Simulator.c](Dice-Simulator.c)

---

## FAQs: Why do I need srand(time(0))?

Without `srand()`, the random number generator always produces
the **same sequence** of "random" numbers every time you run the program!

Try this experiment:
```c
// WITHOUT srand()
for (int i = 0; i < 3; i++) {
    printf("%d\n", rand());
}
// Run twice → same numbers both times!
```

`srand()` **seeds** (initializes) the random generator with a starting value.
Using `time(0)` (current time in seconds) ensures a different seed each run.

**Important**: Call `srand(time(0))` only ONCE at the beginning of main(),
not inside loops or before every `rand()` call!

---

## FAQs: How do I generate random numbers in a range?

Use the modulo operator (%) with the formula:

```c
// Random from 0 to N-1:
rand() % N

// Random from 1 to N:
(rand() % N) + 1

// Random from min to max (inclusive):
(rand() % (max - min + 1)) + min
```

**Example**: Random number between 50 and 100:
```c
int num = (rand() % (100 - 50 + 1)) + 50;
// or simplified:
int num = (rand() % 51) + 50;
```

**The formula**: 
- Range size = `max - min + 1` = `100 - 50 + 1` = `51`
- Use `rand() % 51` to get 0-50
- Add `min` (50) to shift to 50-100
