#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int count = 0;

	while (bits != 0)
	{
		if (bits & 1)
			count++;
		bits >>= 1;
	}
	return (count);
}

