#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to initial segment of haystack
 */

char *_strstr(char *haystack, char *needle)
{
    int nlen = 0;

    while (needle[nlen] != '\0')
    {
        nlen++;
    }

    while (*haystack != '\0')
    {
        char *start = haystack;
        char *needleptr = needle;

        while (*needleptr != '\0' && *needleptr == *haystack)
        {
            needleptr++;
            haystack++;
        }

        if (*needleptr == '\0')
        {
            return start;
        }

        haystack = start + 1;
    }

    return NULL;
}

