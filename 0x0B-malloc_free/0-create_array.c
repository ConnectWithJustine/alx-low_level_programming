#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of memory
 * @c: string
 * Return: if size is 0 return NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = NULL;

	if (size == 0)
		return (NULL);
	if (size != 0)
	ar = (char *)malloc(sizeof(char) * size);
	if (ar != NULL)
		for (i = 0; i < size; i++)
			ar[i] = c;
	return (ar);
}

