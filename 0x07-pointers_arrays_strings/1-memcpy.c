#include "main.h"
/**
 *The _memcpy() function copies n bytes from memory area
 *@dest: is where the memory is stored
 *@src: is where the memory is copied 
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int i = n;

	for (; f < i; r++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}

