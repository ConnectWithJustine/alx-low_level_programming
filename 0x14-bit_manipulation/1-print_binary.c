#include "main.h"
/**
 * print_binary - a function that prints the binary representation
 * of a number
 *
 * @n: Number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
