#!/usr/bin/python3
"""find the perimeter of the island described by 'grid'"""


def island_perimeter(grid):
    """grid is a list of lists of integers
        
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100

Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """
    perimeter = 0
    m = len(grid)
    n = len(grid[0])
    for i in range(m):
        for j in range(n):
            if (grid[i][j] == 1):
                borders = 0
                if (j > 1):
                    if (grid[i][j-1] == 1):
                        borders += 1
                if (j < n - 1):
                    if (grid[i][j+1] == 1):
                        borders += 1
                if (i > 1):
                    if (grid[i-1][j] == 1):
                        borders += 1
                if (i < m - 1):
                    if (grid[i+1][j] == 1):
                        borders += 1
                perimeter += borders
    return perimeter
