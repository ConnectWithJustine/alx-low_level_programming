#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: if NULL return ' '
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	int i, num1, num2, count;

	count = 0;
	if ((s1 == NULL) && (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}
	for (num1 = 0; s1[num1] != '\0'; num1++)
		;
	for (num2 = 0; s2[num2] != '\0'; num2++)
		;
	newstr = (char *)malloc((num1 + num2 + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		newstr[i] = s2[count];
		count++;
	}
	return (newstr);
}
