#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
    if (grid == NULL || height <= 0)
        return;

    for (int i = 0; i < height; i++)
    {
        free(grid[i]);
        grid[i] = NULL; // set to NULL to avoid double-free errors
    }

    free(grid);
}

