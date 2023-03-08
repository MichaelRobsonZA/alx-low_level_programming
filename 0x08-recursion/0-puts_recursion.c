#include "main.h"

/**
 * _puts_recursion - Prints a string recursively, followed by a new line.
 *
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
    /* If the current character is not '\0', print it and recurse. */
if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
/* If the current character is '\0', print a newline character. */
	else
	{
	_putchar('\n');
	}
}

