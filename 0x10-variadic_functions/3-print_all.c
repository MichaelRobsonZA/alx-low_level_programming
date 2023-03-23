#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to separate the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char *str;
    va_list valist;

    va_start(valist, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(valist, char *);

        if (str == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", str);
        }

        if (separator != NULL && i != n - 1)
        {
            printf("%s", separator);
        }
    }

    va_end(valist);
    printf("\n");
}
