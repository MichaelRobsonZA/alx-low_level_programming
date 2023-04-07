#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    /* Return 0 if b is NULL */
    if (b == NULL)
        return (0);

    /* Loop through the string b */
    while (*b != '\0')
    {
        /* Return 0 if the char is not 0 or 1 */
        if (*b != '0' && *b != '1')
            return (0);

        /* Convert the binary number to unsigned int */
        num = (num << 1) + (*b - '0');
        b++;
    }

    return (num);
}

