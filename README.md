CalcCLI — Project Starter Pack

Project Overview

CalcCLI is a command-line calculator application written in C, designed to reinforce core programming fundamentals and establish a foundation for more advanced systems programming projects.

This starter project follows industry-standard conventions:

* clear separation of concerns
* modular file structure
* documented scope and limitations
* extensible architecture
* explicit error handling
* maintainable naming conventions

⸻

Project Scope

Objective

Build a terminal-based calculator that supports fundamental arithmetic operations while demonstrating strong C fundamentals.

In Scope (MVP)

* integer input
* menu-driven CLI interface
* addition
* subtraction
* multiplication
* division
* modulus
* divide-by-zero validation
* continuous execution loop until exit
* modular functions
* basic error messages

Out of Scope (Phase 1)

* floating point arithmetic
* scientific operations
* expression parsing (5 + 3 * 2)
* parentheses support
* calculation history persistence
* GUI
* multithreading

⸻

Project Limitations

The MVP intentionally limits functionality to keep the focus on core C concepts.

Known Limitations

1. Integer-only operations
    * decimal numbers are not supported
2. No operator precedence parsing
    * calculations are menu-based
    * expressions like 5 + 3 * 2 are unsupported
3. Single-operation workflow
    * one operation per execution cycle
4. Minimal input sanitization
    * invalid text input may require future hardening

⸻

Recommended Folder Structure

calccli/
├── src/
│   ├── main.c
│   ├── calculator.c
│   └── calculator.h
├── README.md
├── Makefile
└── docs/
    └── scope.md

⸻

Starter Code

src/calculator.h

#ifndef CALCULATOR_H
#define CALCULATOR_H
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);
#endif

⸻

src/calculator.c

#include "calculator.h"
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}
int modulus(int a, int b) {
    return a % b;
}

⸻

src/main.c

#include <stdio.h>
#include "calculator.h"
void print_menu() {
    printf("\n==== CalcCLI ====\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("Choose an option: ");
}
int main() {
    int choice, a, b, result;
    do {
        print_menu();
        scanf("%d", &choice);
        if (choice == 6) {
            printf("Exiting CalcCLI...\n");
            break;
        }
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        switch (choice) {
            case 1:
                result = add(a, b);
                break;
            case 2:
                result = subtract(a, b);
                break;
            case 3:
                result = multiply(a, b);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Cannot divide by zero\n");
                    continue;
                }
                result = divide(a, b);
                break;
            case 5:
                if (b == 0) {
                    printf("Error: Cannot use modulus by zero\n");
                    continue;
                }
                result = modulus(a, b);
                break;
            default:
                printf("Invalid choice\n");
                continue;
        }
        printf("Result = %d\n", result);
    } while (1);
    return 0;
}

⸻

README.md

# CalcCLI
A command-line calculator built in C to reinforce core programming fundamentals.
## Features
- Addition
- Subtraction
- Multiplication
- Division
- Modulus
- Error handling for divide by zero
## Build
```bash
gcc src/main.c src/calculator.c -o calccli

Run

./calccli

Scope

This project focuses on strengthening:

* functions
* loops
* switch statements
* modular architecture
* input validation

Future Improvements

* floating point support
* scientific calculator mode
* expression parser
* calculation history

---
# Engineering Standards Applied
- single responsibility principle
- header/source separation
- readable naming conventions
- defensive checks
- future extensibility
---
# Suggested Next Milestone
Phase 2:
- convert to `double`
- add `power()`
- add `sqrt()`
- create test cases
- add Makefile automation