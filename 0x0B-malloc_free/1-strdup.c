#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);
	return (dup);
}

