#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: integer variable
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(int));
	if (p == NULL)
		exit(98);
	return (p);
}
