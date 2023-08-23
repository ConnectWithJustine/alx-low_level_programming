#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Destination string (will contain the concatenated result)
 * @src: Source string (will be appended to the destination)
 * Return: Pointer to the destination string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the source string to the destination string */
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Null-terminate the concatenated string */
	dest[dest_len + i] = '\0';
	return (dest);
}
