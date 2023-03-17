#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, g;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (g = 0; needle[g] != '\0'; g++)
		{
			if (haystack[i + g] != needle[g])
				break;
		}
		if (!needle[g])
			return (&haystack[i]);
	}
	return (NULL);
}

