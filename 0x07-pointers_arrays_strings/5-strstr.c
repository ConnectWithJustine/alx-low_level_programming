#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		ptr = &haystack[i];
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				ptr = NULL;
				break;
			}
		}
		if (needle[j] == '\0')
			return (ptr);
	}

	return (NULL);
}
