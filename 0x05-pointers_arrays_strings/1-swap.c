#include "main.h"
/**
 * swap_int(int *a, int *b)
 * @a: first int
 * @b: second int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *b;
	*b = c;
}
