#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function does not return 0, or -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || size <= 0 || cmp == NULL)
	    return (-1);

    for (int i = 0; i < size; i++)
    {
	    if (cmp(array[i]) != 0)
		return (i);
    }

    return (-1);
}

