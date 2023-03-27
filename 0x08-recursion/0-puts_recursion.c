#include "main.h"
/**
 * _puts_rescursion - a function that prints a string, /n
 *@s: string
 *
 * Return: Always 0
 */

void _puts_rescursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
