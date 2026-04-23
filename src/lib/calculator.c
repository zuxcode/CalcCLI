/**
 * @file calculator.c
 * @brief Implements arithmetic operations for CalcCLI.
 */

#include "calculator.h"

/**
 * @brief Adds two integers.
 *
 * @param a First operand.
 * @param b Second operand.
 * @return Sum of both operands.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Subtracts the second integer from the first.
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * @brief Multiplies two integers.
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * @brief Divides two integers.
 *
 * @note Caller is responsible for zero checks.
 */
int divide(int a, int b) {
    return a / b;
}

/**
 * @brief Returns modulus of two integers.
 *
 * @note Caller is responsible for zero checks.
 */
int modulus(int a, int b) {
    return a % b;
}