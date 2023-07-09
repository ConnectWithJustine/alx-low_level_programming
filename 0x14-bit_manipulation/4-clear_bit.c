#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at
 * a given index.
 * @n: Number
 * @index: starting from 0
 * Return: 1 if it worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
