#!/usr/bin/python3
"""
Module to find the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
     that returns the perimeter of the island described in grid
     """
    row = len(grid)
    coloum = len(grid[0])
    perimeter = 0

    for i in range(row):
        for j in range(coloum):
            if grid[i][j] == 1:

                if (i == 0) or (grid[i-1][j] == 0):
                    perimeter += 1

                if (i == row-1) or (grid[i+1][j] == 0):
                    perimeter += 1

                if (j == 0) or (grid[i][j-1] == 0):
                    perimeter += 1

                if (j == coloum-1) or (grid[i][j+1] == 0):
                    perimeter += 1
    return perimeter
