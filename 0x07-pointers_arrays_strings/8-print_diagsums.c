#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: idk
 * @size: size of int
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("Sum of the main diagonal: %d\n", sum1);
	printf("Sum of the secondary diagonal: %d\n", sum2);
}
