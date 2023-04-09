#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	/* count number of bits in n */
	while ((n >> len) > 0)
		len++;
	len--;

	/* print bits from left to right */
	while (len >= 0)
	{
		if ((n >> len) & mask)
			_putchar('1');
		else
			_putchar('0');

		len--;
	}
}

