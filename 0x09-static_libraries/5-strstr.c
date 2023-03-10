#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to initial segment of haystack
 */

char *_strstr(char *haystack, char *needle)
{
    char *p1, *p2, *p3;

    for (p1 = haystack; *p1; p1++) {
        p2 = p1;
        p3 = needle;

        while (*p2 && *p3 && (*p2 == *p3)) {
            p2++;
            p3++;
        }

        if (!*p3) {
            return p1;
        }
    }

    return NULL;
}

