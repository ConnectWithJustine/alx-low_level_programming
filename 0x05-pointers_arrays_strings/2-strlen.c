#include "main.h"
/**
 * _strlen - function that retuns the lengh of string
 * @s: string
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
