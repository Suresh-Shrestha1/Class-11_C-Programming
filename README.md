# Class-11_C-Programming

![C Language](https://img.shields.io/badge/Language-C-blue?logo=c)
![Last Commit](https://img.shields.io/github/last-commit/Suresh-Shrestha1/Class-11_C-Programming)

Welcome to the **C Programming** repository! This collection is designed to help beginners practice core concepts of the C programming language through structured, hands-on lab exercises.

---

## 📚 Table of Contents

- [🧭 Overview](#-overview)  
- [🗂️ Directory Structure](#️-directory-structure)  
- [📋 Lab Summary Table](#-lab-summary-table)  
- [⚙️ How to Compile and Run](#️-how-to-compile-and-run)  
- [🧾 Sample Code Snippets](#-sample-code-snippets)  
- [🧑‍💻 Prerequisites](#-prerequisites)  
- [🤝 Contribution Guide](#-contribution-guide)  
- [📬 Author](#-author)  


## 🧭 Overview

Each lab is organized into folders based on lab numbers. Inside each lab folder, you'll find:

- `.c` files: C source code
- `.exe` files: Precompiled executables (if available)
- Comments and code structured for easy readability and modification

...

## 🗂️ Directory Structure

```
Class-11_C-Programming/
├── Lab1/
│   ├── Lab1a.c ✅ Addition
│   ├── Lab1b.c ➖ Subtraction
│   ├── Lab1c.c ✖️ Multiplication
│   ├── Lab1d.c ➗ Division
│   └── Labc.c ✖️ (Duplicate of Lab1c)
├── Lab2/
│   ├── Lab2a.c 🧮 Area of a rectangle
│   ├── Lab2b.c 🟠 Area of a circle
│   ├── Lab2c.c 🔺 Area of a triangle (Heron's formula)
│   └── Lab2d.c 💱 Currency conversion (paisa to rupees)
├── Lab3/
│   ├── Lab3a.c 🔢 Find middle number
│   └── Lab3b.c 🥇 Find largest number
├── Lab4/
│   ├── Lab4a1.c 🔁 For loop (1 to 10)
│   ├── Lab4a2.c 🔁 While loop (1 to 10)
│   ├── Lab4a3.c 🔁 Do-while loop (1 to 10)
│   └── Lab4b.c ➕ Series: 1, 5, 9, ...
├── Lab5/
│   ├── Lab5a.c 🧪 Prime number check
│   └── Lab5b.c 🔄 Palindrome check
├── Lab6/
│   ├── Lab6a.c 💼 Salary range count
│   └── Lab6b.c 👤 Age range count
├── Lab7/
│   ├── Lab7a.c 🔟 Find largest of 10 numbers
│   ├── Lab7b.c ➕ Add 3x3 matrices
│   └── Lab7c.c ✖️ Multiply 3x3 matrices
├── Lab8/
│   ├── Lab8a.c 📏 String length
│   ├── Lab8b.c 🔁 String reverse
│   ├── Lab8c.c 🔡 Lowercase to Uppercase
│   └── Lab8d.c 🔠 Uppercase to Lowercase
├── Lab9/
│   ├── Lab9a.c 📈 Sort numbers (15 inputs)
│   └── Lab9b.c 🔤 Sort names (10 inputs)
└── README.md 📘 You're here!
```

## 📋 Lab Summary Table

| 🧪 Lab | Description                                  | Key Concepts                     |
|-------|----------------------------------------------|----------------------------------|
| Lab1  | Basic Arithmetic                             | Input/Output, Operators          |
| Lab2  | Area & Currency Calculations                 | Math formulas, Float arithmetic  |
| Lab3  | Min/Max/Middle of Numbers                    | Conditional statements           |
| Lab4  | Loops and Series Generation                  | For, While, Do-While             |
| Lab5  | Prime and Palindrome Checks                  | Logic, Modulo, Reversal          |
| Lab6  | Range Counting                               | Arrays, Conditionals             |
| Lab7  | Matrix and Array Operations                  | Multidimensional Arrays          |
| Lab8  | String Operations                            | Char Arrays, String Handling     |
| Lab9  | Sorting Algorithms                           | Arrays, Bubble Sort (likely)     |



## ⚙️ How to Compile and Run
- Open the `.c` file in your IDE.
- Compile → Run.

> ⚠️ Note: Filenames are case-sensitive on Unix systems. Ensure consistent naming.

### Example using GCC (Linux/macOS/MinGW on Windows):

To compile and run `Lab1/Lab1a.c` using GCC:
```sh
gcc Lab1/Lab1a.c -o Lab1/Lab1a.exe
./Lab1/Lab1a.exe
```
This will compile `Lab1a.c` and run the resulting executable. You can replace `Lab1a.c` with any other `.c` file from the labs.

## 🧾 Sample Code Snippets

### `Lab1a.c` — Adding Two Numbers

```
#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}
```

### Compile & Run
```
gcc Lab1/Lab1a.c -o Lab1/Lab1a.exe
./Lab1/Lab1a.exe
```

Expected output:
```
Enter two numbers: 5 10
Sum = 15
```

## 🧑‍💻 Prerequisites
Before running these programs, ensure you have:

- A C compiler installed (e.g., GCC, Turbo C++)
- A code editor or IDE (e.g., VS Code, Code::Blocks)
- Basic knowledge of the C language

## 🤝 Contribution Guide
Thank you for considering contributing! Here’s how you can help:

1. Fork this repository
2. Create a branch
```
git checkout -b feature/your-feature-name
```
3. Make changes to code or docs
4. Commit your changes
```
git commit -m "Add feature XYZ"
```
5. Push your branch
```
git push origin feature/your-feature-name
```
6. Open a Pull Request here on GitHub

### Guidelines
- Write clean, commented code
- Follow the naming conventions (e.g., lab1a.c)
- Update README if you add new files or change functionality
- Test your code before submitting

## 📬 Author
This code was written by Suresh Shrestha. If you have any questions or need further clarification, feel free to reach out!
