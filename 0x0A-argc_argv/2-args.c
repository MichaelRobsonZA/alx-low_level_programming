#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	/* Iterate through each argument and print it */
	for (i = 0; i < argc; i++)
	{
		_putstr(argv[i]);
		_putchar('\n');
	}

	/* Return success */
	return (0);
}

