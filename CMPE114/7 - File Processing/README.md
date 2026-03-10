# File Processing in C Programming

This section introduces File Processing.
Up until now, our loops and variables only lived in RAM. When the program closed, the data vanished forever. Files allow our programs to save data permanently onto the hard drive.

---

## What is File Processing?

File processing involves using system commands to Open, Read, Write, and Close files on your computer.
In C, a special pointer called `FILE *` acts as the stream that connects your program to the text file on disk.

---

## Why is this important?

Imagine a game that couldn't save your progress, or an application that didn't keep logs.
Persisting data is crucial. File I/O allows programs to store settings, read enormous datasets, export results, and create permanent records.

---

## Core Concepts in This Section

In this folder, you will learn about:
- The `FILE *` pointer
- Opening files with `fopen()`
- The core modes: `"r"` (read), `"w"` (write), `"a"` (append)
- Writing to files using `fprintf()`
- Reading from files using `fscanf()` and `fgets()`
- Properly closing files with `fclose()`

---

## Basic File Writing Example

```c
#include <stdio.h>

int main(void) {
    // 1. Create a file pointer and open a file in "w" (Write) mode
    FILE *file = fopen("data.txt", "w");

    // 2. Always check if the file opened successfully!
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 3. Write into the file (Notice it's just like printf, but with an 'f')
    fprintf(file, "Hello, World!\n");
    fprintf(file, "Saving my high score: %d\n", 999);

    // 4. VERY IMPORTANT: Close the file when done!
    fclose(file);
    printf("Data written successfully.\n");

    return 0;
}
```

---

## Explanation

`FILE *file` creates a special reference that keeps track of the file's status.
`fopen("data.txt", "w")` asks the Operating System for permission to write into `data.txt`. If it doesn't exist, it creates it!
`fprintf` stands for File Print Format. It works exactly like `printf`, except the very first argument is the file you want to print into.
`fclose(file)` tells the OS we are done, allowing other programs to use the file and guaranteeing that our data is physically written to the drive. (Always close your files! *Sincerely, Raymond Holt*)

---

## Common Beginner Mistakes

- **Forgetting to check for `NULL`:** If you try to open a file in "r" (Read) mode that doesn't exist, `fopen` returns `NULL`. If your program tries to read from `NULL`, it immediately crashes.
- **Losing data because of `"w"` mode:** Opening a file in `"w"` mode **IMMEDIATELY DELETES** all existing contents of that file. If you just want to add text to the end of a file without destroying it, use `"a"` (Append) mode!
- **Forgetting `fclose(file)`:** If you don't close the file, the Operating System might not actually finish writing your data to the hard drive, resulting in a blank or corrupted file.

---

## Practice Suggestions

- Create a program that acts as a Diary. It should ask the user for input and save their sentence into `diary.txt`.
- Try opening `data.txt` in `"r"` mode, and read its contents back onto the console screen using `fscanf`.

---

## Examples

- [ex-1.c](ex-1.c) - Writing to a file (`w` mode)
- [ex-2.c](ex-2.c) - Reading from a file (`r` mode)
- [ex-3.c](ex-3.c) - Appending to a file (`a` mode)

---

## FAQs: What does EOF mean?

EOF stands for End-Of-File. When you are reading a file using `fscanf` or `fgetc`, eventually you run out of text. Functions will automatically return a special negative value (`EOF`) to let your `while` loop know it's time to stop reading!
