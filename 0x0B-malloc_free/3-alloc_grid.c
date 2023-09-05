#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Allocate memory for a 2D grid of integers and initialize to 0.
 *
 * Description:
 * This function dynamically allocates memory for a 2D grid (a matrix) of
 * integerswith the specified 'width' and 'height'. All elements of the
 * grid are initialized to 0. It handles cases where 'width' or 'height'
 * are 0 or negative, returning NULL in such cases. If memory allocation
 * fails for any row, previously allocated memory is freed to prevent memory
 * leaks.
 *
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return:
 * - On success: A pointer to the allocated 2D grid.
 * - On failure: NULL, indicating an allocation error or invalid input.
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = (int **)malloc(height * sizeof(int *));

if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}

free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
