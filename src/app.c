/**
 * @file main.c
 * @brief Entry point for the CalcCLI application.
 *
 * Provides a menu-driven interface for performing
 * basic arithmetic operations in the terminal.
 */

#include <stdio.h>
#include "lib/calculator.c"
#include "lib/app_info.c"

// #define APP_DEVELOPER "Alfred Chigozie"

/**
 * @brief Prints the calculator menu options.
 */
void print_menu()
{
    printf("\n==== CalcCLI ====\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("Choose an option: ");
}

/**
 * @brief Application entry point.
 *
 * Continuously prompts the user for arithmetic
 * operations until the exit option is selected.
 *
 * @return Exit status code.
 */
int main()
{
    int choice, a, b, result;

    print_app_info();
    do
    {
        print_menu();
        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("Exiting CalcCLI...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        switch (choice)
        {
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
            if (b == 0)
            {
                printf("Error: Cannot divide by zero\n");
                continue;
            }
            result = divide(a, b);
            break;
        case 5:
            if (b == 0)
            {
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