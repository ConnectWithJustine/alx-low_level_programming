#include "mian.h"
#include <stdio.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: input min.
 * @max: input max.
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * full);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
