/**
 * @file calculator.h
 * @brief Function declarations for core arithmetic operations.
 *
 * This header exposes the public interface for the CalcCLI
 * arithmetic engine. Each function performs a single integer
 * operation and returns the computed result.
 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * @brief Adds two integers.
 *
 * @param a First operand.
 * @param b Second operand.
 * @return Sum of a and b.
 */
int add(int a, int b);

/**
 * @brief Subtracts the second integer from the first.
 *
 * @param a Minuend.
 * @param b Subtrahend.
 * @return Difference of a and b.
 */
int subtract(int a, int b);

/**
 * @brief Multiplies two integers.
 *
 * @param a First operand.
 * @param b Second operand.
 * @return Product of a and b.
 */
int multiply(int a, int b);

/**
 * @brief Divides one integer by another.
 *
 * @param a Dividend.
 * @param b Divisor.
 * @return Quotient of a and b.
 *
 * @note Caller must ensure b is not zero.
 */
int divide(int a, int b);

/**
 * @brief Computes the modulus of two integers.
 *
 * @param a Dividend.
 * @param b Divisor.
 * @return Remainder after division.
 *
 * @note Caller must ensure b is not zero.
 */
int modulus(int a, int b);

#endif