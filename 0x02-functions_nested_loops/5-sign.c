#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: if n > 0 print 1, if n = 0 print 0, if n < 0 print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
