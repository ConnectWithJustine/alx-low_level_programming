#include "main.h"
/**
 * _puts - function that prints a string \n
 * @str: string
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
