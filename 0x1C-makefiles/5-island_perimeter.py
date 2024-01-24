#!/usr/bin/python3
""" Implementing the island_perimeter function """


def island_perimeter(grid):
    """ Evaluates the perimeter of a grid island """
    found = 0
    row = 0
    col = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                found = 1
                row = i
                col = j
    if not found:
        return 0
    irow = 0, icol = col
