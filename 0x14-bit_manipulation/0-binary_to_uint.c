#include "main.h"
/**
 * binary_to_uint - A function that converts a binary
 * number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (!b)
		return (0);
	result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	result = result * 2 + (b[i] - '0');
	}
	return (result);
}
