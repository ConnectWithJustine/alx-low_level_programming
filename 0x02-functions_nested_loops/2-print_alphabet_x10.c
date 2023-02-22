#include "main.h"

/**
 * void print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (succes)
 */
void print_alphabet_x10(void)
{
	int i, co;
	co = 0;

	while (co < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	co++;
	}
}
