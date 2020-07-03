#!/usr/bin/python3
"""
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    c = 0
    total = 0
    for x in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[x][j] == 1:
                if grid[x][j-1] + grid[x][j+1] +\
                   grid[x-1][j] + grid[x+1][j] == 1:
                    c = 3
                    total += c
                else:
                    total += 2
    return(total)
