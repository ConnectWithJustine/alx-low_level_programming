#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: string
 * @needle: substring
 * fork from max git repo
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, exit;
	char *ptr;

start_from_here:j = 0;
	exit = 0;
	for (; (haystack[i] != '\0'); i++)
		if (haystack[i] == needle[j])
		{
			ptr = &haystack[i];
			break;
		}
	if (haystack[i] == '\0')
	{
		return ('\0');
	}
	while ((haystack[i] != '\0') && (needle[j] != '\0'))
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
	{
		return (ptr);
	}
	if (haystack[i] == '\0')
		return (0);
	goto start_from_here;
	return (ptr);
}
