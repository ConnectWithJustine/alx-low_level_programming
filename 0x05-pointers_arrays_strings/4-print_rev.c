#include "main.h"
/**
 * print_rev - function that print a string, in reverse
 * @s: string to be resereve
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i;
	i =0;

	while (*(s +i) ! = '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s +i));
		i--;
	}
	_putchar('\n');
}
