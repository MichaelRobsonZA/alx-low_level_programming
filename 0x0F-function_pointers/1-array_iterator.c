#include "function_pointers.h"

/**
 * array_iterator - iterates an array of integers and applies a function
 * @array: array of integers to iterate over
 * @size: size of the array
 * @action: pointer to a function that takes an int and returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

