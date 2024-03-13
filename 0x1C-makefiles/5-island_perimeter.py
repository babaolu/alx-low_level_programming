#!/usr/bin/python3
""" Implementing the island_perimeter function """


def island_perimeter(grid):
    """ Evaluates the perimeter of a grid island """
    row, col, found = 0, 0, 0
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                found = 1
                row = i
                col = j
    if not found:
        return 0
    irow, icol = row, col
    while irow == row and icol == col and not found:
        found = 0
        if grid[i][j - 1]:
	    per = per + 1;
            
        
