#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: integer variable
 *
 * Return:if fail return '\0' else treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size_1 = 0, size_2 = 0, i;

	if ((s1 == NULL) || (s2 == NUL))
	{
		s1 = "";
		s2 = "";
	}

	while (s1[size_1] != '\0')
	{
		size_1++;
	}

	while (s2[size_2] != '\0')
	{
		size_2++;
	}

	if (n > size_2)
	n = size_2;
	p = malloc((size_1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size_1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size_1 + n); i++)
	{
		p[i] = s2[i - size_1];
	}
	p[i] = '\0';

	return (p);
}
