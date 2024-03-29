#include "main.h"

/**
 * str_len - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int str_len(char *s)
{
	if (*s == '\0')
	    return (0);

    return (1 + str_len(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = str_len(s);

    if (len <= 1)
	    return (1);

    if (*s == *(s + len - 1))
	    return (is_palindrome(s + 1) && 1);

    return (0);
}

