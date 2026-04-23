
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

---
## Out of Scope (Phase 1)

* floating point arithmetic
* scientific operations
* expression parsing (5 + 3 * 2)
* parentheses support
* calculation history persistence
* GUI
* multithreading


## Project Limitations

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