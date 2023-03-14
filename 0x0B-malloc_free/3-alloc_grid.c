#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **arr = calloc(height, sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));
		if (arr[i] == NULL)
	{	for (int j = 0; j < i; j++)
		free(arr[j]);
		free(arr);
		return (NULL);
	}
	}
	return (arr);
}
