#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Deallocate memory for a 2D grid previously created by alloc_grid.
 *
 * Description:
 * This function takes a pointer to a 2D grid and the 'height' of the grid,
 * which was created using the alloc_grid function. It frees the memory for
 * the entire grid, including both the array of pointers and the individual
 * integer arrays within it.
 *
 * @grid: Pointer to the 2D grid to be deallocated.
 * @height: The height (number of rows) of the grid.
 */

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
