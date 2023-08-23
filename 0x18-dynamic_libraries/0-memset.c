#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: Pointer to the memory to be filled
 * @b: The byte value to fill the memory with
 * @n: The number of bytes to fill
 * Return: Pointer to the memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
