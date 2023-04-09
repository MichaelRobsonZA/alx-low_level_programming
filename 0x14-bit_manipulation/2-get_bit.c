#include "main.h"
#include <stddef.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

/* Check if index is within the range of bits in an unsigned long int */
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

/* Create a mask with a 1 at the index position and 0's everywhere else */
	mask = 1 << index);
/* Use the bitwise AND operator to get the value of the bit at index */
		return ((n & mask) ? 1 : 0);
}

