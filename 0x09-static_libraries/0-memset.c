#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: string
 * @b: input varible of char tye represents the charcter to fil s
 * @n: unsigned int variable the number of bytes to be filled
 *
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
