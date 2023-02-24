#include "main.h"

/**
 * print_line - a function that draws a straight line
 *
 * @n: number x character
 * Return: if n is 0 or less, print \n
 */

void print_line(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
