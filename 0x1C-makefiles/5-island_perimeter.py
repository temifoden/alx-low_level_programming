#!/usr/bin/python3
"""
This module contains the function island_perimeter which calculates
the perimeter of the island described in the grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the given grid.

    Parameters:
    grid (list of list of int): A list of list of integers where
    0 represents water and 1 represents land.

    Returns:
    int: the perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Initially add 4 for the current land cell
                perimeter += 4

                # Check the upper cell
                if i > 0 and grid[i-1][j] == 1:
                    # Reduce by 2 (1 for the current cell and 1 for the upper)
                    perimeter -= 2
                # Check the left cell
                if j > 0 and grid[i][j-1] == 1:
                    # Reduce by
                    # 2 (1 for the current cell and 1 for the left cell)
                    perimeter -= 2
    return perimeter
