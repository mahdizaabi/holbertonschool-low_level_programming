#!/usr/bin/python3
"""
returns the perimeter of the island described in grid
"""

def island_perimeter(grid):

    row = len(grid)
    col = len(grid[0])
    total = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i == 0:
                    if j == 0:
                        if grid[i][j+1] + grid[i+1][j] == 1:
                            total += 3
                        else:
                            total += 2
                    elif j == len(grid[0]) - 1:
                        if grid[i][j-1] + grid[i+1][j] == 1:
                            total += 3
                        else:
                            total += 2
                    else:
                        if grid[i][j+1] + grid[i][j-1] + grid[i+1][j] == 1:
                            total += 3
                        else:
                            total += 2
                elif i == len(grid) - 1:
                    if j == 0:
                        if grid[i][j+1] + grid[i-1][j] == 1:
                            total += 3
                        else:
                            total += 2
                    elif j == len(grid[0]) - 1:
                        if grid[i][j-1] + grid[i-1][j] == 1:
                            total += 3
                        else:
                            total += 2
                    else:
                        if grid[i][j-1] + grid[i][j+1]  + grid[i-1][j] == 1:
                            total += 3
                        else:
                            total += 2
                elif j > 0 and j % (len(grid[0]) - 1) == 0 and i != 0 and i != len(grid) - 1:
                    if grid[i+1][j] + grid[i-1][j] + grid[i][j-1] == 1:
                        total += 3
                    else:
                        total += 2

                else:
                    if grid[i+1][j] + grid[i-1][j] + grid[i][j-1] + grid[i][j+1] == 1:
                        total += 3
                    else:
                        total += 2
    return(total)


