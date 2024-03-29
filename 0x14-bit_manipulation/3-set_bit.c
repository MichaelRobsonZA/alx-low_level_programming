#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to be modified.
 * @index: The index, starting from 0 of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* check if index is within bounds of the size of unsigned long int */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
    /* set the bit at the given index to 1 by using a bitwise OR operator */
	*n |= (1ul << index);

    /* return 1 to indicate success */
	return (1);
}

