#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: character
 *
 * Return: new s[]
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
