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
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	unsigned long int mask = 1UL << index;

	mask = ~mask;
	*n &= mask;
	return (1);
}
