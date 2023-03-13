#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - the function that free memory from grid
 * @grid: grid to free
 * @height: the height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
