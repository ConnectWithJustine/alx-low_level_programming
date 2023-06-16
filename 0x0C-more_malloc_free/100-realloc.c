#include "main.h"

/**
 * _memcpy - copies the memory from src to dest
 * @dest: copy to
 * @src: copy from
 * @n: bytes to use from src
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previosly allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to the new allocated memory and free ptr.
 * NULL if can not allocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	p = _memcpy(p, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (p);
}
