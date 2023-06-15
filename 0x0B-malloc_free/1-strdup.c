#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter
 * @str: string
 *
 * Return: NULL if str = '\0'
 */
char *_strdup(char *str)
{
	char *newstr = NULL;
	int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	newstr = (char *)malloc(n + 1 * sizeof(char));
	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			newstr[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	newstr[i] = '\0';
	return (newstr);
}
