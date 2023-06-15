#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 *@grid: rows
 *@height: columns
 * Return: If width or height is 0 or -ive, return NULL
 */
void free_grid(int **grid, int height)
{
	int i, *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
