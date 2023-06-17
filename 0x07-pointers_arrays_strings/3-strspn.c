#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: constant byte
 *
 * Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;

	for (unsigned int i = 0; s[i] != '\0'; i++)
	{
		for (unsigned int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (cont);
}

