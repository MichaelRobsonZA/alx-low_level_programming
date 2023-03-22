#include "function_pointers.h"

/**
 * print_name - prints a name using the function pointed to by `f`
 * @name: name to be printed
 * @f: pointer to a function that takes a char and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

