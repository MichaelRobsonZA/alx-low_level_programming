#include "main.h"
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    /* Check if two arguments were passed */
    if (argc != 3)
    {
        _putstr("Error\n");
        return (1);
    }

    /* Convert the arguments to integers and multiply them */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;

    /* Print the result */
    _putnbr(result);
    _putchar('\n');

    /* Return success */
    return (0);
}

