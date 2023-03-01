#include "main.h"
/**
 * _strlen - function that retuns the lengh of string
 * @str: string
 *
 * Return: lenght
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
