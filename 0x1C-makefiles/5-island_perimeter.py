#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island as described in a 2*2 grid"""
    answer = 0
    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                answer += 4
                if i > 0 and grid[i - 1][j] == 1:
                    answer -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    answer -= 2
    return answer
