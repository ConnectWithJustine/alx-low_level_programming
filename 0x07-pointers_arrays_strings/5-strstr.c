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
	int i, j, exit;
	char *ptr;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		exit = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				ptr = &haystack[i];
				exit = 1;
				break;
			}
		}
		if (exit)
			break;
	}

	if (haystack[i] == '\0')
		return (NULL);

	while (haystack[i] != '\0' && needle[j] != '\0')
	{
		if (haystack[i] != needle[j])
		{
			exit = 1;
			break;
		}
		i++;
		j++;
	}

	if (needle[j] == '\0' && !exit)
		return (ptr);

	if (haystack[i] == '\0')
		return (NULL);

	return (ptr);
}
