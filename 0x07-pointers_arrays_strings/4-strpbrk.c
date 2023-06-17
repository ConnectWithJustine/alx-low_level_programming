#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: constant byte
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, cont = 0;
	char *p;

	for (i = 0; (s[i] != '\0'); i++)
	{
		for (j = 0; (accept[j] != '\0'); j++)
			if (s[i] == accept[j])
			{
				p = (s + i);
				cont = 1;
				break;
			}
		if (cont)
			break;
	}
	if (cont)
		return (p);
	else
		return ('\0');
}
