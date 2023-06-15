#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional int n[].
 *@width: rows
 *@height: colums
 * Return: If width or height is 0 or -ive, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **num;
	int i, j, l, *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	num = (int **)malloc(height * sizeof(int *));
	if (num == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(num + i) = (int *)malloc(width * sizeof(int));
		if (*(num + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = num[i];
				free(p);
			}
			free(num);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			num[l][j] = 0;
		}
	}
	return (num);
}
