#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers.
 *
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: If width or height is 0 or negative, or if malloc fails - NULL.
 *         Otherwise - a pointer to the 2D array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}

