#include "main.h"
#define BASE 0
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string
 *
 * Return: On success 1 else -1.
 */
void _puts_recursion(char *s)
{
	if (*s == BASE)
	{
		_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
