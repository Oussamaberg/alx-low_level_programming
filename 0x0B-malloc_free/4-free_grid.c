#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * free_grid - free all allocated blocks.
 * @grid: pointer.
 * @height: the height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
