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
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
