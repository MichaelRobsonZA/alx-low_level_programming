#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to be modified.
 * @index: The index, starting from 0 of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

/* use bitwise AND with the complement of a bit shifted to the index */
/* to set the bit at the index to 0 and leave all other bits unchanged */
	*n &= ~(1ul << index);

	return (1);
}

