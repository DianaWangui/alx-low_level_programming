#!/usr/bin/python3

"""A function to find perimeter of an island."""


def island_perimeter(grid):
  """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (List[List[int]]): A list of lists of integers representing the island.

    Returns:
    - int: The perimeter of the island.
    """
  per = 0
  # Iterate through each cell in the grid
  for i in range(len(grid)):
    for j in range(len(grid[0])):
      # Check if the current cell is land (1)
      if grid[i][j] == 1:
        # Check adjacent cells (up, down, left, right)
        if i == 0 or grid[i - 1][j] == 0:
          # Top edge
          per += 1
        if i == len(grid) - 1 or grid[i + 1][j] == 0:
          # Bottom edge
          per += 1
        if j == 0 or grid[i][j - 1] == 0:
          # Left edge
          per += 1
        if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
          # Right edge
          per += 1
  return per