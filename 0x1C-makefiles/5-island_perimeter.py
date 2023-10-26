#!/usr/bin/python3
"""Defines an island perimeter function."""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A rectangular grid where 1 represents land and
        0 represents water.

    Returns:
        int: The perimeter of the island.
    """


    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check adjacent cells to subtract shared edges
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for the top edge
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 for the left edge

    return perimeter
