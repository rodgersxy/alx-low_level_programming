#!/usr/bin/python3
"""
to calculate the perimeter of the island
"""


def island_perimeter(grid):
    """
    perimeter of the island as decribed in the grid
    Return:
        a perimeter
    """
    perimeter = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            start = 4
            if grid[x][y] == 1 and x != len(grid) - 1 and grid[x + 1][y] == 1:
                start -= 1
            if grid[x][y] == 1 and x != 0 and grid[x - 1][y]:
                start -= 1
            if grid[x][y] == 1 and y != len(grid[x]) - 1 and grid[x][y + 1]:
                start -= 1
            if grid[x][y] == 1 and y != 0 and grid[x][y - 1]:
                start -= 1
            if grid[x][y] == 1:
                perimeter += start
    return perimeter
