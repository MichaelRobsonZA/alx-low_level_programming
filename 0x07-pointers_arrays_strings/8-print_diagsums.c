#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
    int sum1 = 0, sum2 = 0;
    int i;

    for (i = 0; i < size * size; i += size + 1) {
        sum1 += a[i];
    }

    for (i = size - 1; i < size * size - 1; i += size - 1) {
        sum2 += a[i];
    }

    printf("%d, %d\n", sum1, sum2);
}

