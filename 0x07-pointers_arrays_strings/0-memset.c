#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: string
 * @b: constant byte
 * @n: length
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[1] = b;
	}
	return (s);
}
