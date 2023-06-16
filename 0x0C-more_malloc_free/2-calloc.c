#include "main"
/**
* _calloc - a function that allocates memory for an array
* @nmemb: input string.
* @size: input string.
*
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, tsize;

	tsize = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(tsize);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (tsize); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
