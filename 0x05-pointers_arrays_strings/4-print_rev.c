#include "main.h"
/**
 * print_rev - function that print a string, in reverse
 * @s: string to be resereve
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
