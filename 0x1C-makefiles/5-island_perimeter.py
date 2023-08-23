#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of integers): The 2D grid representing the island.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                # subtract the shared edges
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 1
                if row < rows - 1 and grid[row + 1][col] == 1:
                    perimeter -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 1
                if col < cols - 1 and grid[row][col + 1] == 1:
                    perimeter -= 1

    return perimeter
